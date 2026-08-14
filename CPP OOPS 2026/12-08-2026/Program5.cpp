/*Write a program to define a class book having data members 
 bookid , bookname, bookprice , autherName, bookQuantity
and member functions to accept and display the details of book.*/

#include<iostream>
using namespace std;

class book{
    private:
        int bookid;
        string bookname;
        float bookprice;
        string autherName;
        int bookQuantity;
    public:
        void acceptDetails(){
            cout<<"Enter Book ID: ";
            cin>>bookid;
            cout<<"Enter Book Name: ";
            cin.ignore();
            getline(cin, bookname);
            cout<<"Enter Book Price: ";
            cin>>bookprice;
            cout<<"Enter Author Name: ";
            cin.ignore();
            getline(cin, autherName);
            cout<<"Enter Book Quantity: ";
            cin>>bookQuantity;
        }
        
        void displayDetails(){
            cout<<"\nBook ID: "<<bookid;
            cout<<"\nBook Name: "<<bookname;
            cout<<"\nBook Price: "<<bookprice;
            cout<<"\nAuthor Name: "<<autherName;
            cout<<"\nBook Quantity: "<<bookQuantity<<endl;
        }
};

int main(){

    book b;
    b.acceptDetails();
    b.displayDetails();
    return 0;
}