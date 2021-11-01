package unl.cse;

import java.time.LocalDate;
import java.util.HashSet;
// https://www.youtube.com/watch?v=QnqmDyQFN3A

public class demo26Oct {
  public static void main (String args[]){
    Student me = new.Student();
    me.firstname = "Chris";
    me.lastname = "Bourke";
    me.gpa = 3.5;
    me.newID = 1545454
    me.year = Year.FRESHAMN;
    //Remeber to use Alt+shif and arrow to use block column
    Student jane = new.Student();
    jane.firstname = "Jane";
    jane.lastname = "Bourke";
    jane.gpa = 4.5;
    jane.newID = 2545454
    jane.year = Year.SENIOR;

    Student janev2 = new.Student("Jane","Bourke",4.5,2545454,Year.SENIOR);

    System.out.println(me);
    me.gpa=3.9;
    setGpa(4.5);//Better options
    System.out.println(janev2);
  }
  //We can use


}
