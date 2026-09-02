public class Java_Syntax {
    public static void main(String[] args) {
        //basics 
        System.out.println("Hello World");
        System.out.println("Java is Fun!");
        System.out.println(3);
        System.out.println(358);
        System.out.println(50000);
        System.out.println(3 + 3);

        //variables
        String name = "Srushti";
        System.out.println(name); //string

        int myNum = 15;
        System.out.println(myNum); //int 

        int myNumber;
        myNumber = 20;
        System.out.println(myNumber); //int

        String txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        System.out.println("The length of the txt string is: " + txt.length()); //string length

        //string methoda
        String text = "Hello World";
        System.out.println(text.toUpperCase());   // Outputs "HELLO WORLD"
        System.out.println(text.toLowerCase());   // Outputs "hello world"

        //index 
        String line = "Please locate where 'locate' occurs!";
        System.out.println(line.indexOf("locate")); // Outputs 7

        //string concatenation
        String firstName = "John ";
        String lastName = "Doe";
        int Age = 25;
        String fullname = firstName + lastName;
        System.out.println("My name is" + fullname + "and my age is" + Age);
        //System.out.println(firstName.concat(lastName)); prints "John Doe"

        //datatypes
        int age = 22; 
        double cgpa = 7.5;
        float percentage = 85.5f;
        char grade = 'A';
        boolean passed = true;

        System.out.println(age); 
        System.out.println(cgpa);
        System.out.println(percentage);
        System.out.println(grade);
        System.out.println(passed);

        //type casting
        int x = 10;
        double y = x;
        System.out.println(y); //widening casting

        double a = 10.5;
        int b = (int) a;
        System.out.println(b); //narrowing casting

        //operators
        int p = 20;
        int q = 8;

        //java uses + for both addition and concatenation
        System.out.println(p + q); //addition
        System.out.println(p - q); //subtraction
        System.out.println(p * q); //multiplication
        System.out.println(p / q); //division
        System.out.println(p % q); //modulus

        System.out.println(p > q); //greater than
        System.out.println(p < q); //less than
        System.out.println(p == q); //is equal to
        System.out.println(p != q); //is not equal to


    }
}