public class Java_Methods{
    static void myMethod() {
    System.out.println("I just got executed!");
  }

  //Method Parameters
  static void methods(String fname) {
    System.out.println(fname + " Refsnes");
  }

  //multiple parameters
  static void name(String fname, int age) {
    System.out.println(fname + " is " + age);
  }

  static void checkAge(int ageIs) { //Create a checkAge() method with an integer variable called age

    // If age is less than 18, print "access denied"
    if (ageIs < 18) {
      System.out.println("Access denied - You are not old enough!");

    // If age is greater than, or equal to, 18, print "access granted"
    } else {
      System.out.println("Access granted - You are old enough!");
    }
  }

  //Return Values
  static int Values(int x) {
    return 5 + x;
  }

  //Method Overloading
  

  public static void main(String[] args) {
    myMethod();

    methods("Liam");
    methods("Jenny");
    methods("Anja");

    name("Liam", 5);
    name("Jenny", 8);
    name("Anja", 31);

    checkAge(20);

    System.out.println(Values(3));

  }
}    