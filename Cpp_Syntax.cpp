#include<bits/stdc++.h>
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
    cout << FullName;

    //Append can also be used instead of string concatenation
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;

    //String Length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size(); //txt.length() can also be used 

    //Access Strings
    string myString = "Hello";
    cout << myString; // Outputs Hello

    cout << myString.at(0);  // First character
    cout << myString.at(1);  // Second character
    cout << myString.at(myString.length() - 1);  // Last character

    myString.at(0) = 'J';
    cout << myString;  // Outputs Jello


    return 0;
}