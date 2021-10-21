package unl.cse;

import java.util.HashSet;
import java.util.Set;

public class demo21Oct {
    public static void main(String args[]){
      File f = new File("file.txt");
      try {
        Scanner s = new Scanner(f);
        while (s.hasNextLine()){
          String line = s.nextLine();
          System.out.pritnln(line);
        }
        s.close();
      } catch (FileNotFoundException e) {
        throw new RuntimeException(e);
      }
      }
}
