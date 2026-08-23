#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    //non-parameterised constructor
    Teacher() {
        dept = "Computer Science";
        cout << "Hi I'm constructor\n";
    }

    //parameterised constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    //copy constructor 
    Teacher(Teacher &orgObj) {
        cout << "I am custom copy constructor...\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
    //properties /attributes
    string name;
    string dept;
    string subject;
    

    //methods /member functions
    void changeDept (string newDept) {
        dept = newDept;
    }
    
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "Subject: " << subject << endl;
    }
    //setter
    void setSalary (double s){
        salary = s;
    }
    
    //getter
    double getSalary(){
        return salary;
    }
};

class Account {
private:  //in-accessible
    double balance;
    string password; //data hiding

public:   //accessible
    string accountId;
    string username;
    
};

class Student {
public:
    string name;
    double* cgpaPtr;

    Student (string name, double cgpa) {
        this->name = name;
        cgpaPtr= new double;
        *cgpaPtr = cgpa;
    }

    Student (Student &obj) {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    //destructor 
    ~Student(){
        cout << "Hi, I delete everything\n";
        delete cgpaPtr;  //memory leak 
    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

class Person {
public:
    string name;
    int age;

    Person (string name, int age) {
        this->name = name;
        this->age = age;
    }

    Person(){
        cout << "Parent constructor...\n";
    }
};

class StudentCopy : public Person {
public: 
    int rollno;

    StudentCopy(string name, int age, int rollno) : Person (name, age){
        this->rollno = rollno;
        //cout << "Child Constructor...\n";
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
    }

    StudentCopy() {
    cout << "StudentCopy constructor...\n";
    }
};

//multi level inheritance 
class GradStudent : public StudentCopy {   
public: 
    string researchArea;
};

//multiple inheritance
class TA : public Student, public Teacher {  
public:
    TA(string studentName, double cgpa, string teacherName)
        : Student(studentName, cgpa), Teacher() {
        
        Teacher::name = teacherName;
    }
}; 


// hierarchical inheritance
class People {  
public: 
    string name;
    int age;

};
  
class Child : public People {
public:
    int rollno;
};

class Parent : public People {
public:
    string subject;
};
 
//compiletime ploymorphism (function overloading)
class Print {  
public:
    void show(int x){
        cout << "int : " << x << endl;
    }

    void show(char ch){
        cout << "char : " << ch << endl;
    }
};

//runtime ploymorphism (function overriding)
class Principal { 
public:
    void getInfo() {
        cout << "principal class\n";
    }

    virtual void hello() { //virtual function
        cout << "hello from principal\n";
    }
};

class Children : public Principal {
public:
    void getInfo() {
        cout << "children class\n";
    }

    void hello() {
        cout << "hello from children\n";
    }

};

//abstract class 
class Shape { 
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape {
public: 
    void draw() override {
        cout << "drawing a circle\n";
    }
};

//static keyword
void fun() { 
    static int x = 0; // init statement - 1 run
    cout << "x : " << x << endl;
    x++;
}

class A {
public:
    int x;

    void incX() {
        x = x + 1;
    }
};

int main() {
    Teacher t1("Srushti", "ComputerScience", "C++", 25000);
    t1.getInfo();
    t1.name = "Srushti";    
    t1.subject = "C++";
    t1.setSalary(25000);
    
    Teacher t2(t1); //curtom copy constructor - invoke
    t2.getInfo();
    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    cout << t1.dept << endl;

    Student s1("Rahul Kumar", 8.9);
    Student s2(s1); //"neha Kumar"

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "neha";
    s2.getInfo();

    StudentCopy s3 ("rahul kumar", 21, 1234 );
    //s3.name = "rahul kumar";
    //s3.age = 21;
    //s3.rollno = 1234;

    s3.getInfo();
    GradStudent s4;
    s4.name = "tony stark";
    s4.researchArea = "quantum physics";
    cout << s4.name << endl;
    cout << s4.researchArea << endl;

    TA t3("Tony", 8.5, "Tony Stark");

    cout << t3.Student::name << endl;
    cout << t3.Teacher::name << endl;
    cout << t3.cgpaPtr[0] << endl;

    Print p1;
    p1.show('&');
    p1.show(101);

    Children c1;
    c1.getInfo();
    Principal p2;
    p2.getInfo();
    

    Circle c2;
    c2.draw();

    fun();
    fun();
    fun();

    A obj;
    obj.x= 0;
    cout << obj.x << endl;
    obj.incX();
    cout << obj.x << endl;


    return 0;

}