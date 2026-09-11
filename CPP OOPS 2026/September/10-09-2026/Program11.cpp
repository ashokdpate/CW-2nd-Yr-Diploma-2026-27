/*
Multi-level Inheritance in C++:

* in this case one class is derived from a class which is also derived from another class. 
This is called multi-level inheritance.

* The class diagram of such a inheritance can be as shown in fig:

* In this case class C is derived from class B and class B is derived from class A.

*
                A
            _____________
            |   private  |
            |   protected|
            |    a       |
            |    public  |
            |     read() |
            |____________|

        B       public
            _____________
            |   private  |
            |    b      |
            |   protected|
            |    a       |
            |    public  |
            |     read() |
            |     display()|
            |____________|

        C       public
            _____________
            |   private  |
            |    c      |
            |   protected|
            |    b       |
            |    a       |
            |    public  |
            |     read() |
            |     display()|
            |     sum()  |
            |____________|

*/