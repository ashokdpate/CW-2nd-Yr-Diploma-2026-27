/*
General Syntax
data_type array_name[size];
int marks[5];

1. Declaration Only ✅ (Valid)
int a[5];

2. Declaration with Initialization ✅ (Valid)
int a[5] = {10,20,30,40,50};

3. Size Omitted (Compiler Counts Automatically) ✅ (Valid)
int a[] = {10,20,30,40,50};

4. Partial Initialization ✅ (Valid)
int a[5] = {10,20};

7. Character Array Using String ✅ (Valid)
char name[] = "Ashok";
8. Character Array Using Characters ✅ (Valid)
char name[] = {'A','s','h','o','k'};

10. Floating Point Array ✅ (Valid)
float price[4] = {10.5,20.2,30.3,40.4};

11. Double Array ✅ (Valid)
double salary[3] = {12000.50,15000.25,18000.75};
*/

/*
Invalid Array Declarations ❌
1. No Size and No Initialization ❌
int a[];

2. More Initializers Than Size ❌
int a[3] = {10,20,30,40};

3. Negative Size ❌
int a[-5];

4. Floating-Point Size ❌
int a[5.5];

5. String Assigned to Integer Array ❌
int a[] = "Hello";

6. Character Array Too Small for String ❌
char name[3] = "Ashok";

7. Array Size Zero ❌
int a[0];

8. Assigning One Array to Another
int a[5], b[5];

a = b;

9. Initializing After Declaration ❌
int a[5];

a = {1,2,3,4,5};

Correct approach:

int a[5] = {1,2,3,4,5};

assign elements individually:

a[0]=1;
a[1]=2;
a[2]=3;
a[3]=4;
a[4]=5;
*/