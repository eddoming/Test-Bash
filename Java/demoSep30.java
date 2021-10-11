package unl.cse;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.InputMismatchException;
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Demo {
    public static void main(String[] args){
        List<Integer> myList = new ArrayList<>();
        
        myList.add(10);
        myList.add(20);
        myList.add(300);
        
        System.out.println(myList);
        myList.add(0,42);
        System.out.println(myList);
        myList.remove(1);
        System.out.println(myList);
    
        //Broken infinite loop
        for (int i=0;i<myList.size();i++){
//             myList.add(101);
            System.out.println(myList.get(i));
        }
        //Fixate loops in Java, Hyperloops?
        //Detects when you add one more value to the list
        for (Integer x : myList) {
            myList.add(101);
            System.out.println(x);
        }
    }
}
//Conclusion List are the next level for arrays, But what cost more? is more memory request? I suposse it will be... but has to be just a little more right?! 
