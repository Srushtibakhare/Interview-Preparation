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

        //string methods
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
        System.out.println("My name is " + fullname + " and my age is " + Age);
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

        //math
        System.out.println(Math.max(5, 10)); //10
        System.out.println(Math.min(5, 10)); //5
        System.out.println(Math.sqrt(64)); //8
        System.out.println(Math.abs(-4.7)); //4.7
        System.out.println(Math.pow(2, 8));  // 256.0
        System.out.println(Math.round(4.6));  // 5
        System.out.println(Math.ceil(4.1));   // 5.0
        System.out.println(Math.floor(4.9));  // 4.0
        System.out.println(Math.random()); //random number between 0.0(including) and 1.0(excluding)
        int randomNum = (int)(Math.random() * 101);  
        System.out.println(randomNum); // 0 to 100

        //boolean
        boolean isJavaFun = true;
        boolean isFishTasty = false;

        System.out.println(isJavaFun);    // Outputs true
        System.out.println(isFishTasty);  // Outputs false

        //if statement 
        boolean isLightOn = true;

        if (isLightOn) {
        System.out.println("The light is on.");
        }

        //else statement
        boolean isRaining = false;

        if (isRaining) {
        System.out.println("Bring an umbrella!");
        } else {
        System.out.println("No rain today, no need for an umbrella!");
        }

        //else if statement
        int weather = 2; // 1 = raining, 2 = sunny, 3 = cloudy

        if (weather == 1) {
        System.out.println("Bring an umbrella.");
        } else if (weather == 2) {
        System.out.println("Wear sunglasses.");
        } else {
        System.out.println("Just go outside normally.");
        } // Outputs "Wear sunglasses."

        //Short Hand if...else statement (ternary)
        int time = 20;
        String result = (time < 18) ? "Good day." : "Good evening.";
        System.out.println(result);

        //Nested If statement
        int AgeIs = 20;
        boolean isCitizen = true;

        if (AgeIs >= 18) {
        System.out.println("Old enough to vote.");
        
        if (isCitizen) {
            System.out.println("And you are a citizen, so you can vote!");
        } else {
            System.out.println("But you must be a citizen to vote.");
        }
        } else {
        System.out.println("Not old enough to vote.");
        }

        //Logical Operators
        int m = 200;
        int n = 33;
        int o = 500;

        if (m > n && o > m) {
        System.out.println("Both conditions are true"); //AND operatore
        }

        int c = 200;
        int d = 33;
        int e = 500;

        if (c > d || c > e) {
        System.out.println("At least one condition is true"); //OR operator
        }

        int r = 33;
        int s = 200;

        if (!(r > s)) {
        System.out.println("a is NOT greater than b"); //NOT operator
        } 

        //Switch Statements
        int day = 4;
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday"); //// Outputs "Thursday" (day 4)
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
        }

        //default Keyword
        int weekday = 4;
        switch (weekday) {
        case 6:
            System.out.println("Today is Saturday");
            break;
        case 7:
            System.out.println("Today is Sunday"); 
            break;
        default:
            System.out.println("Looking forward to the Weekend"); //Outputs "Looking forward to the Weekend"
        }

        //while loop
        int countdown = 3;

        while (countdown > 0) {
        System.out.println(countdown);
        countdown--;
        }

        System.out.println("Happy New Year!!");

        //Do/While Loop
        int i = 0;
        do {
        System.out.println(i);
        i++;
        }
        while (i < 5);

        //For Loop
        for (int j = 0; j < 5; j++) {
        System.out.println(j); //print Numbers
        }

        for (int k = 0; k <= 10; k = k + 2) {
        System.out.println(k); //print even numbers
        }

        int sum = 0;
        for (int z = 1; z <= 5; z++) {
        sum = sum + z;
        }
        System.out.println("Sum is " + sum); //Sum of Numbers

        //Nested Loops
        for (int t = 1; t <= 2; t++) { // Outer loop
        System.out.println("Outer: " + t); // Executes 2 times
        
        for (int f = 1; f <= 3; f++) { // Inner loop
            System.out.println(" Inner: " + f); // Executes 6 times (2 * 3)
        }
        } 

        //for-each Loop
        String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

        for (String car : cars) {
        System.out.println(car);
        }

        //Break and Continue statements
        for (int u = 0; u < 10; u++) { //Break
            if (u == 4) {
                break;
            }
            System.out.println(u);
        }

        for (int v = 0; v < 10; v++) { //Continue
            if (v == 4) {
                continue;
            }
            System.out.println(v);
        }

        for (int w = 0; w < 6; w++) { //Combined break and continue
            if (w == 2) {
                continue;
            }
            if (w == 4) {
                break;
            }
            System.out.println(w); 
        }

        //Arrays
        String[] vehicle = new String[4]; // size is 4
        vehicle[0] = "Volvo";
        vehicle[1] = "BMW";
        vehicle[2] = "Ford";
        vehicle[3] = "Mazda";
        //String[] vehicle = {"Volvo", "BMW", "Ford", "Mazda"};
        System.out.println(vehicle[0]); // Outputs Volvo
        System.out.println(vehicle.length); // Outputs 4

        //Multidimensional Arrays
        int[][] myNumbers = { {1, 4, 2}, {3, 6, 8, 5, 2} };

        System.out.println("Rows: " + myNumbers.length);             // 2
        System.out.println("Cols in row 0: " + myNumbers[0].length); // 3
        System.out.println("Cols in row 1: " + myNumbers[1].length); // 5
    }
}