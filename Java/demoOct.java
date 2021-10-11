package unl.cse;

import java.util.HashSet;
import java.util.Set;

public class demoOct {

    public static void main(String args[]){
        Student a = new Student("Chris", "Bourke", 548794, 3.0);
        Student b = new Student("Jane", "Smith", 658794, 3.5);
        
        System.out.println(a.hashCode());
        System.out.println(b.hashCode());
        
        Set<Student> roster = new HashSet<>();
        roster.add(a);
        roster.add(b);
    }

}
