import math
import copy
import heapq
import networkx as nx
from network2tikz import plot
#pip install networkx
#pip install network2tikz
#pip install scipy


g = nx.Graph()

g.add_node("hello")
g.add_node(0)
g.add_nodes_from([5,6,7])

for x in g.nodes:
    print(x)

#g.add_edge(5,5) Infinite loop
g.add_edge(7,5)
g.add_edge(5,7)
g.add_edge("hello",6)
g.add_edge("hello",7)

print("n =",g.number_of_nodes())
print("m =",g.number_of_edges())

# iteration over the edges 
for (x,y) in g.edges():
    print(x, "is adjecent to ", y)
    
# You can attach "attibutes"
#colors = ["red", "green","blue"]
#nx.set_node_attributes(g,colors,"color")
for x in g.nodes:
    g.nodes[x]["color"]='blue'
    
for x in g.nodes:
    print(x, ' has color ', g.nodes[x]["color"])
    
for (x,y) in g.edges():
    g[x][y]["weight"] = 10

#for (x,y) in g.edges():
    #print(x, '')    
#Using the library to plot the graphic map
style={}
style['node_label'] = [str(x) for x in g.nodes]
style['edge_curved']=0
style['layout']='fruchterman_reingold'
style['edge_label']=[wt for (x,y,wt) in g.edges.data('weight')]
plot(g,'mygraph.tex',**style)
