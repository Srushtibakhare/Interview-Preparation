#include<bits/stdc++.h>
// Include the cmath library
#include <cmath>
using namespace std;

int main() {
    //basic print 
    cout << "Hey Srushti! \n";
    cout << "Hey Srushti!" << "\n";
    cout << "Hey Srushti!" << std :: endl << "Hey" << std :: endl;

    //integers 
    int x, y;
    cin >> x >> y;
    cout << "Value of Integer x is: " << x << " And integer y is: " << y << "\n";

    //float 
    float a, b;
    cin >> a >> b;
    cout << "Value of float a is: " << a << " And float b is: " << b << "\n";

    //long long
    long long bigNumber;
    cin >> bigNumber;
    cout << "value of bigNumber is: " << bigNumber << "\n";

    // double
    double Number;
    cin >> Number;
    cout << "value of Number is: " << Number << "\n";

    //char 
    char Character;
    cin >> Character;
    cout << "Character is: " << Character << "\n";

    //string
    string String;
    cin >> String;
    cout << "My Name is: " << String << "\n";

    //boolean
    bool Boolean;
    cin >> Boolean;
    cout << "Value of Boolean is: " << Boolean << "\n";

    //auto keyword
    auto p = -45678.9999;
    cout << fixed << setprecision(4); //to print numbers after decimal, without this it would be -45678
    cout << "Variable value is: " << p << "\n";
 
    //arithematic operator
    int q = 10;
    int r = 3;

    cout << (q + r) << "\n"; 
    cout << (q - r) << "\n"; 
    cout << (q * r) << "\n";
    cout << (q / r) << "\n"; 
    cout << (q % r) << "\n"; 

    int z = 5;
    ++z;
    cout << z << "\n"; 
    --z;
    cout << z << "\n"; 

    //Increment and decrement operator
    int peopleInRoom = 0;

    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    cout << peopleInRoom << "\n"; // 3

    peopleInRoom--;

    cout << peopleInRoom << "\n"; // 2

    //Compound Assignment Operators
    int m = 10;
    m += 5;  
    cout << m << "\n"; // 15

    m *= 2;  
    cout << m << "\n"; // 30

    //Comparison Operators
    int passwordLength = 5;
    cout << (passwordLength >= 8) << "\n"; // 0 (false), too short
    cout << (passwordLength < 8) << "\n";  // 1 (true), needs more characters

    //Operator Precedence
    int result1 = 2 + 3 * 4;     // 2 + 12 = 14
    int result2 = (2 + 3) * 4;   // 5 * 4 = 20

    cout << result1 << "\n";
    cout << result2 << "\n";

    //string concatenation
    string FirstName = "John";
    string LastName = "Doe";
    string FullName = FirstName + " " + LastName;
    cout << FullName << "\n";

    //Append can also be used instead of string concatenation
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName << "\n";

    //String Length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size() << "\n"; //txt.length() can also be used 

    //Access Strings
    string myString = "Hello";
    cout << myString << "\n"; // Outputs Hello

    cout << myString.at(0) << "\n";  // First character
    cout << myString.at(1) << "\n";  // Second character
    cout << myString.at(myString.length() - 1) << "\n";  // Last character

    myString.at(0) = 'J';
    cout << myString << "\n";  // Outputs Jello

    //cmath librabry
    cout << max(5, 10) << "\n";
    cout << min(5, 10) << "\n";
    cout << sqrt(64) << "\n";
    cout << round(2.6) << "\n";
    cout << log(2) << "\n";

    //Boolean Values
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << boolalpha; // enable printing "true"/"false"

    cout << isCodingFun << "\n";  // Outputs 1 (true)
    cout << isFishTasty << "\n"; // Outputs 0 (false)

    cout << noboolalpha; // reset to 1/0
    cout << isCodingFun << "\n";  // Outputs 1 
    
    //Boolean Expressions
    int c = 10;
    int d = 9;
    cout << (x > y) << "\n"; // returns 1 (true), because 10 is higher than 9

    //Conditional Statements
    int age = 20;
    if (age >= 18) {
        cout << "You are an adult." << "\n"; //Simple if
    }

    int marks = 40;
    if (marks >= 50) {
        cout << "Pass" << "\n";
    } else {
        cout << "Fail" << "\n"; //if-else
    }

    int score = 75;
    if (score >= 90) {
        cout << "Grade A" << "\n";
    } else if (score >= 75) {
        cout << "Grade B" << "\n";
    } else if (score >= 50) {
        cout << "Grade C" << "\n";
    } else {
        cout << "Grade F" << "\n"; //else if ladder
    }

    int temperature = 30;
    bool isRaining = false;
    if (temperature > 25) {
        if (isRaining) {
            cout << "Hot and rainy" << "\n";
        } else {
            cout << "Hot and sunny" << "\n"; //Nested if
        }
    }

    int Day = 6;
    bool isHoliday = true;
    if (Day == 6 && isHoliday) {
        cout << "Weekend holiday!" << "\n"; //if with logical AND (&&)
    }

    char grade = 'B';
    if (grade == 'A' || grade == 'B') {
        cout << "Good performance" << "\n"; //if with logical OR (||)
    }

    int num = 7;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << result << "\n"; //Ternary operator (short if-else)

    //Switch Statements
    int day = 4;
    switch (day) {
    case 1:
        cout << "Monday" << "\n";
        break;
    case 2:
        cout << "Tuesday" << "\n";
        break;
    case 3:
        cout << "Wednesday" << "\n";
        break;
    case 4:
        cout << "Thursday" << "\n"; //Outputs "Thursday" (day 4)
        break;
    case 5:
        cout << "Friday" << "\n";
        break;
    case 6:
        cout << "Saturday" << "\n";
        break;
    case 7:
        cout << "Sunday" << "\n";
        break;
    default:
        cout << "Looking forward to the Weekend" << "\n"; //Outputs "Looking forward to the Weekend"
    }
    
    // //while loop
    int countdown = 3;

    while (countdown > 0) {
    cout << countdown << "\n";
    countdown--;
    }

    cout << "Happy New Year!!\n";

    //do-while loop
    int i = 10;
    do {
    cout << "i is " << i << "\n";
    i++;
    } while (i < 5); 
  
    //for loop 
    for (int j = 1; j <= 5; j++) {
        cout << "j is " << j << "\n"; 
    }

    //nested loop (for inside for)
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            cout << row << "," << col << " ";
        }
        cout << "\n"; 
    }

    //for-each loop
    int numbers[5] = {10, 20, 30, 40, 50};
    for (int n : numbers) {
        cout << n << " "; 
    }
    cout << "\n";

    //Examples of Loops
    for (int i = 0; i <= 100; i += 10) {
    cout << i << "\n";
    } //counts to 100 by tens

    for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
    } //print even numbers between 0 and 10 (inclusive)

    for (int i = 1; i <= 10; i = i + 2) {
    cout << i << "\n";
    } //print odd numbers

    for (int i = 2; i <= 512; i *= 2) {
    cout << i << "\n";
    } //print the powers of 2 up to 512

    int number = 2;
    int l;

    for (l = 1; l <= 10; l++) {
    cout << number << " x " << l << " = " << number * l << "\n";
    } //multiplication table for a specified number

    
    return 0;
}