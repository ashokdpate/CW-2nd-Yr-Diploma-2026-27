Q1) Answer the following

# a) Convert Decimal Number into Binary

# i) Decimal 5

Divide by 2 repeatedly:

Division	Quotient	Remainder
5 ÷ 2	2	1
2 ÷ 2	1	0
1 ÷ 2	0	1

Read remainders from bottom to top:

5₁₀ = 101₂

# ii) Decimal 13
Division	Quotient	Remainder
13 ÷ 2	6	1
6 ÷ 2	3	0
3 ÷ 2	1	1
1 ÷ 2	0	1

Read remainders from bottom to top:

13₁₀ = 1101₂

b) List the applications of OOP

# Applications of Object-Oriented Programming are:

Real-time systems
Simulation and modeling
Banking systems
E-commerce applications
Game development
Desktop applications
Artificial Intelligence and Expert Systems
Database management systems
Mobile applications
Web applications

# c) Explain the structure of C++ with example

A basic C++ program contains the following parts:

Documentation / Comments
Header files
Namespace declaration
Main function
Variable declaration
Program statements
Return statement
Example:

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int sum;

    sum = a + b;

    cout << "Sum = " << sum;

    return 0;
}

# Explanation:
#include <iostream> → Includes input/output functions.
using namespace std; → Allows use of standard namespace.
int main() → Starting point of the program.
int a, b, sum; → Variable declaration.
sum = a + b; → Performs addition.
cout → Displays output.
return 0; → Terminates the program successfully.


# d) Define

i) Keyword: A keyword is a reserved word in C++ that has a predefined meaning to the compiler.

Examples:

int
class
public
private
if
else
return
while

Keywords cannot be used as variable or function names.

# ii) Identifier

An identifier is a name given to program elements such as variables, functions, classes, and objects.

Example:

int marks;

Here, marks is an identifier.

Other examples:

student
total
calculate()
Student

# e) State the use of Scope Resolution Operator

The scope resolution operator :: is used to access a data member or member function belonging to a particular scope.

Main uses:
To define a class member function outside the class.
To access a global variable when a local variable has the same name.
To access static class members.
To access members of a namespace.

Example:
class Student
{
public:
    void display();
};

void Student::display()
{
    cout << "Hello Student";
}

Here, Student::display() indicates that display() belongs to the Student class.

# f) Which are the input and output operators in C++?
Input Operator

>> is the input/extraction operator.

It is generally used with cin.

cin >> a;
Output Operator

<< is the output/insertion operator.

It is generally used with cout.

cout << a;

Therefore:

Input operator → >>
Output operator → <<

# g) Define Manipulators

Manipulators are special functions or objects used with input/output streams to control the formatting of input and output.

Examples:
endl
setw()
setprecision()
setfill()
Example:
cout << "Hello" << endl;

Here, endl moves the cursor to the next line.

For setw():

cout << setw(10) << 25;

setw() sets the width of the output field.

# Q2) Attempt any Five

# a) Differentiate between POP and OOP
POP	OOP
POP stands for Procedure Oriented Programming.	OOP stands for Object-Oriented Programming.
Program is divided into functions.	            Program is divided into objects and classes.
It follows a top-down approach.	                It generally follows a bottom-up approach.
Data is less secure.	                        Data is more secure due to data hiding.
It does not support inheritance.	            It supports inheritance.
It does not support polymorphism.	            It supports polymorphism.
Example: C	                                    Examples: C++, Java

Short answer:

POP focuses mainly on functions/procedures, whereas OOP focuses on objects and classes.

# b) Explain Binary Operator in C

A binary operator is an operator that requires two operands to perform an operation.

Syntax:
Operand1 operator Operand2
Examples:
a + b
a - b
a * b
a / b
a % b

Here, a and b are two operands.

# Types of Binary Operators

1. Arithmetic operators

+   -   *   /   %

2. Relational operators

<   >   <=   >=   ==   !=

3. Logical operators

&&   || 

4. Assignment operators

=   +=   -=   *=   /=
Example:
int a = 10, b = 5;
int c = a + b;

Here + is a binary operator because it operates on two operands, a and b.

# c) Write a program to accept a number and display its square and cube

Program:
#include <iostream>
using namespace std;

int main()
{
    int n, square, cube;

    cout << "Enter a number: ";
    cin >> n;

    square = n * n;
    cube = n * n * n;

    cout << "Square = " << square << endl;
    cout << "Cube = " << cube << endl;

    return 0;
}
Sample Output:
Enter a number: 5
Square = 25
Cube = 125


# d) State Four Pillars of OOP

The four main pillars of Object-Oriented Programming are:

# 1. Encapsulation

Wrapping data and functions into a single unit called a class is called encapsulation.

# 2. Abstraction

Showing only essential information and hiding unnecessary implementation details is called abstraction.

# 3. Inheritance

The process by which one class acquires properties and functions of another class is called inheritance.

# 4. Polymorphism

The ability of an object/function to take more than one form is called polymorphism.

Easy way to remember:

E → Encapsulation
A → Abstraction
I → Inheritance
P → Polymorphism

# e) WAP for Addition of Two Numbers Using Class and Object
Program:
#include <iostream>
using namespace std;

class Addition
{
    int a, b, sum;

public:
    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void calculate()
    {
        sum = a + b;
    }

    void display()
    {
        cout << "Addition = " << sum;
    }
};

int main()
{
    Addition obj;

    obj.accept();
    obj.calculate();
    obj.display();

    return 0;
}
Sample Output:
Enter two numbers: 10 20
Addition = 30

# f) WAP to find Area of Circle using Externally Defined Member Function
Requirements:

read() → Accept radius from user.
compute() → Calculate area.
display() → Display result.

Member functions are defined outside the class using the scope resolution operator ::.

Program:
#include <iostream>
using namespace std;

class Circle
{
    float radius, area;

public:
    void read();
    void compute();
    void display();
};

void Circle::read()
{
    cout << "Enter radius: ";
    cin >> radius;
}

void Circle::compute()
{
    area = 3.14 * radius * radius;
}

void Circle::display()
{
    cout << "Area of Circle = " << area;
}

int main()
{
    Circle c;

    c.read();
    c.compute();
    c.display();

    return 0;
}
Sample Output:
Enter radius: 5
Area of Circle = 78.5

Important exam point:

The following are externally defined member functions:

void Circle::read()
void Circle::compute()
void Circle::display()

The :: operator is called the scope resolution operator.

# g) Program to Define Class Student
Requirements:

Data members:

rollno
name
marks

Member functions:

accept()
display()
Program:

#include <iostream>
using namespace std;

class Student
{
    int rollno;
    char name[30];
    float marks;

public:
    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details";
        cout << "\nRoll No = " << rollno;
        cout << "\nName = " << name;
        cout << "\nMarks = " << marks;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}

Sample Output:
Enter Roll No: 101
Enter Name: Ashok
Enter Marks: 85

Student Details
Roll No = 101
Name = Ashok
Marks = 85

