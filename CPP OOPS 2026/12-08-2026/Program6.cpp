/*Homework 6:
 Write a C++ program for Addition of Two Numbers 
 Using Class and Object having data members num1, num2 
 and member functions to accept(), add() and display() 
 the result of addition.
 */

 #include<iostream>
 using namespace std;

 class Addition{
     private:
         int num1, num2, sum;
     public:
         void accept(){
             cout<<"Enter first number: ";
             cin>>num1;
             cout<<"Enter second number: ";
             cin>>num2;
         }
         
         void add(){
             sum = num1 + num2;
         }
         
         void display(){
             cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<sum<<endl;
         }
 };
 
 int main(){
     Addition a;
     a.accept();
     a.add();
     a.display();
     return 0;
 }