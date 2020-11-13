#!/bin/env bash
#Usage ./graph.sh 
#info
# Based on the code of nicolasazrak https://stackoverflow.com/questions/7998302/graphing-a-processs-memory-usage
#Post https://brunogirin.blogspot.com/2010/09/memory-usage-graphs-with-ps-and-gnuplot.html
# trap ctrl-c and call ctrl_c()
trap ctrl_c INT

LOG=$(mktemp)
SCRIPT=$(mktemp)
IMAGE=$(mktemp)

echo "Output to LOG=$LOG and SCRIPT=$SCRIPT and IMAGE=$IMAGE"
#Creating Macro for gnuplot
cat >$SCRIPT <<EOL
set term png small size 800,600
set output "$IMAGE"
set ylabel "RSS"
set y2label "VSZ"
set ytics nomirror
set y2tics nomirror in
set yrange [0:*]
set y2range [0:*]
plot "$LOG" using 3 with lines axes x1y1 title "RSS", "$LOG" using 2 with lines axes x1y2 title "VSZ"
EOL

function ctrl_c() {
	gnuplot $SCRIPT
	echo "Stoping the memory log and opening plot"
	xdg-open $IMAGE
	exit 0;
}

while true; do
#ps -p is for the pid number and -C is for the name of the processs
ps -C firefox -o pid= -o vsz= -o rss= | tee -a $LOG
#PID info, vsz virtual memory, rss residual memory
sleep 2
done
