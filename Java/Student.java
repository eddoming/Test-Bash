package unl.cse;

public class Student{

    private final String firstname;
    private final String lastname;
    private final int id;
    private final double calification;

    public Student(String firstname,String lastname,int id,double calification){
        super();//?
        this.firstname = firstname;
        this.lastname = lastname;
        this.id = id;
        this.calification = calification;
    }
    public void setGpa(double gpa) {
      if (gpa<0.0 || gpa >4.0){
        throw new IllegalArgumentException("Invalid gpa");
      }
      this.gpa = gpa;
    }
    public int getAge(){
      Period p = Period.between(dateofBirth, LocalDate.now());
      return p.getYears();
    }
}
