package unl.cse;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.InputMismatchException;
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.Map;

public class Demo {
    public static void main(String[] args){
    //Set unique values
        Set<Integer> s = new HashSet<>();
        
        s.add(10);
        s.add(20);
        s.add(30);
        System.out.println(s);//Print not in order
        
        for(Integer x : s){
            System.out.println(s);
            //Adding duplicate
            s.add(20);
            s.add(20);
        }
        List<Integer> numbers = new ArrayList<>();
        numbers.add(10);
        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        numbers.add(30);
        numbers.add(30);
        System.out.println(numbers);//Print not in order
        Set<Integer> uniqueElemets = new HashSet<>(numbers);
        System.out.println(uniqueElemets);
        
        //New interesting thin Map
        Map<Integer,String> m = new HashMap<>();
        m.put(10,"ten");
        m.put(11,"eleven");
        m.put(12,"twelve");
        System.out.println(m);
        //Get value with key
        String ss = m.get(10);
        System.out.println(s);
        m.put(42,"answer");
        System.out.println(m);
        
        //Iterate over the elements:
        for(Integer key : m.keySet()){
            System.out.println(key + " Maps to " + m.get(key));
        }
        //Iteration over the elements by value:
        for(String str :m.values()){
            System.out.println(str);
        }
        //Multidimensional arrays
        int table[][] = new int[3][4];
        table[0][0] = 42;
        //Set the bottom right
        table[2][3] = 1;
        System.out.println(table);
        
        //To print we need to for...
        for (int i = 0; i<table.length;i++){
            for (int j = 0; j<table[i].length;j++){
                System.out.println(table[i][j]);
            }
            System.out.println("\n");
        }
        //Deep copy in Java
        
        int a[] = new int[5];
        for (int i = 0; i<a.length;i++){
            a[i]=(i+1)*10;
        }
        int b[] = a;
//         a[0] = 42;
//         System.out.printf("b[0] = %d\n",b[0]);
        //Deep copy!
        b = Arrays.copyOf(a, a.length);
        a[0] = 42;
        System.out.println(Arrays.toString(a));
        System.out.println(Arrays.toString(b));
    }
}

