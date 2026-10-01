/*
Multiple Inheritance:

* in this case one class is derived from multiple classes.

* The class diagram of such a inheritance can be shown in fig:

   class A                    class B
  __________                 __________
  |private   |              |protected|    
  | protected|              |public   |
  | public   |              |         |
  |__________|              |_________|
        ^                         ^
        |                         |
        |                         |
        |_________    ____________|
                 |    |
                 |    |
                 |    |
                 |    |
                class C
               __________
              |private   |
              |protected |
              |public    |
              |__________|  


* In this calse class C is derived from class A and class B. 
The members of class A and class B are inherited by class C.

* To derived a class from multiple classes we need to use the following syntax:
class_derived_class_Name : access_specifer base_className1 , 
                            access_specifer base_className2 ,
                            access_specifer base_className3
  
*/

