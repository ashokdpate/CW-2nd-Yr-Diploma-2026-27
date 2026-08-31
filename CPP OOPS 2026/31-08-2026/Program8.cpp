/*
A friend function is a function that is not a member of a class, but it is allowed to access 
the private and protected members of that class.

Syntax of Friend Function:
class ClassName
{
private:
    int x;

public:
    friend void functionName(ClassName obj);
};
--------------------------------------------------------
The function is generally defined outside the class:

void functionName(ClassName obj)
{
    // Can access private members
}

-A friend function is not a member function of the class.
-It is declared inside the class using the keyword friend.
-It can access private members of the class.
-It can also access protected members of the class.
-It is defined outside the class like a normal function.
-It is called like a normal function, not using an object with dot operator.
    display(s1);
Not
    s1.display();

-A friend function does not have a this pointer because it is not a member function.
-A friend function can be declared in the public or private section of a class. Its access is
 not affected by where the declaration appears.
-One friend function can be declared as a friend of more than one class.
-Friend functions are useful when an operation needs access to private data of multiple classes.
*/