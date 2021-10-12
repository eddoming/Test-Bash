package unl.cse;
import java.util.HashSet;
// https://www.youtube.com/watch?v=1ra8nEg9kbY
public class demooct12 {
    public static void main(String args[]){
    String s ="Hello";
    String a ="Goodbye";
    
    
    System.out.println(s);
    System.out.println(a);
    String u = s.toUpperCase();
    System.out.println(a);
    //Mutable Strings, like concaconate
    StringBuilder sb = new StringBuilder();
    sb.append("Hello").append(" Extra space ");
    sb.append(" ");
    sb.append("World");
    System.out.println(sb);
    //Can be changed with
    sb.setCharAt(0,'L');
    System.out.println(sb);
    
    //In jave we have the same as sprintf
    String message = String.format("Hello and %s", sb);
    System.out.println(message);
    
    //We return to strtok from from tokenizing
    String data="Edgar,Dominguez,Rosas,444,CDMX,blabla";
    String tokens[] = data.split(",");
    //String tokens[] = data.split("[0-9][0-9][0-9]"); three numbers
    //[A-Z] [a-z] \\s \t emojis etc [a-z]+ or [a-z]* ""
    //Java is stronger in comparison with C
    for (String token : tokens){
        System.out.println(token);
    }
    //== same memory
    String f = "Hello";
    String j = "Hello";
    
    if (f==j){
        System.out.println("there are equal");
    }
    //In java we have the a.
    }
}
