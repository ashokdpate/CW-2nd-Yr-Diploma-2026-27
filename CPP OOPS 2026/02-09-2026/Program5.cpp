/*
Problem: 3
Create a class Number with a private data member num.
Create two objects and use a friend function to find and display the greater number.
*/

#include<iostream>
using namespace std;

class Number{

    private:
    int num;
    public:
    Number(int n){
        num=n;
    }

  friend  void greaterNumber(Number n1, Number n2);

};

void greaterNumber(Number n1, Number n2){

    if (n1.num > n2.num)
    {
        cout<<"Number n1 is greater"<<n1.num;
    }
    else if (n2.num> n1.num)
    {
        cout<<"Number N2 is greater"<<n2.num;
    }
    else{
        cout<<"Both number are eequal";
    }
    
}


int main(){
    Number n1(100);
    Number n2(400);

    greaterNumber(n1, n2);

}