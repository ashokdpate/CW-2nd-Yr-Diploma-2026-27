# DSU Daily Notes

Combined from this folder and its subfolders. Original Markdown and C source contents are retained under their source filenames and date folders; other files are linked below.

## General (root)

### ImportantQuestionDSA.md


# Q.1 State any two differences between linear and binary search.

# Q.2  List any four methods of sorting.

# Q.3 Difference Between the linear and nonlinear data structures.

# Q.4 Write any four operations performed on data structure.  

# Q.5 Define searching. State the two methods of searching.

# Q.6 List any four applications of stack data structure.

# Q.7 Explain the term: Time Complexity.



Q1. Find the position of element 88 using binary search method in an array given below: 
Arr = {77, 33, 44, 11, 88, 22, 66, 55}

Q2. Find the position of element 88 using binary search method in an array given below: 
Arr = {44, 24, 47, 53, 89, 34, 14, 88}

Q3. Draw a binary search tree using following elements: 
35, 15, 40, 7, 100, 28, 82, 53, 25, 3
Q4. Draw a binary search tree using following elements: 
55, 35, 60, 17, 122, 428, 82, 33, 25, 43


Q5. Show the effect of PUSH and POP operations on the stack of size 10. The stack contains 
        40, 30, 52, 86, 39, 45, 50 with 50 being at the top of the stack. Show diagrammatically the effect of
(i) PUSH 59 (ii) PUSH 85 (iii) POP (iv) POP (v) PUSH 59 (vi) POP    


Q6. A stack of size 10 contains: 15, 25, 35, 45, 55, 65 where 65 is the TOP element.
Perform the following operations:
1) PUSH(75) 2) POP() 3) POP() 4) PUSH(85) 5) PUSH(95) 6) POP() 
7) PUSH(105) 8) POP()


Q7.  Sort the following numbers in ascending order using Bubble Sort: {15  16    6   8   5} and write the output after each iteration.

Q8.  Sort the following numbers in ascending order using Bubble Sort: {25  46    16   83   65} and write the output after each iteration.


Q9. Write a C Program for searching element Using Linear Search Algorithms
 

Q10. For given binary tree perform preorder, postorder and inorder traversal.

#            A
#         /    \
#       B       C
#      / \     / \
#    D   E    G   H
#       /         / 
#      F         J
#               /
#              K 


Q11. For given binary tree perform preorder, postorder and inorder traversal.

#            60
#          /    \
#        25      75
#       /  \    /  \
#     10   35  65  90
#    / \   /
#   5 15 30

---

## Assignment

- [DSU Assignment 1 and 2.pdf](<Assignment/DSU Assignment 1 and 2.pdf>)

## August

### 04-08-2026

#### Notes.md

## What is Data Structure?

# Data Structure is a way to store data elements into the memory (i.e. into the main memory) in an organized manner so that operations like addition, deletion, traversal, searching, sorting etc... can be performed on it efficiently.

# 1.Time Complexity: It is the amount of time i.e. computer time required for an algorithm to run to completion.

# 2.Space Complexity: It is the amount of space i.e. computer memory required for an algorithm to run to completion.

# 1."Best case time complexity→ if an algo takes min amount of time to complete its execution then it is referred as best case time complexity.

# 2."Worst case time complexity"→ if an algo takes max amount of time to complete its execution then it is referred as worst case time complexity.

# 3."Average case time complexity"→ if an algo takes neither min nor max amount of time to complete its execution then it is referred as an average case time complexity.


## There are 3 asymptotic notation:-

# 1.Big Omega (Ω) → This notation is used to represent best case time complexity.
-Big omega represents as asymptotic lower bound

# 2.Big Oh (O) →This notation is used to represent worst case time complexity
-big oh represents as asymptotic upper bound.

# 3.Big theta(θ) → this notation is used to denote an average case time complexity.
-big theta represents as asymptotic tight bound.

## Types of Data Structure ?

# 1. Linear Data structure
    a. Linked Lists
    b. stacks
    c. Queues

# 2. Non-Linear Data structure.
    a.Tree
    b.Graph

## Operations on Data structures.

1. Traversing :
    -Traversing a data structure is accessing each data and accessing only once

2. Searching
    -Searching is finding the location of data in within the given data structure
    A.Linear search (Sequential search)
    B.Binary Search

3. Insertion
    -Inserting is adding a new data in the data structure
4. Deletion
    -Deleting is removing a data from the data structure

5. Sorting
    -Sorting is arranging of data in some logical order
    A.Bubble sort
    B.Selection Sort
    C.Insertion Sort
    D.Merge sort
    E.Queek Sort

6. Merging
    -merging is combining of two similar data structure.



#### program1.c

```c
//Program 3: Take input from user and then print the Sum of Array


#include<stdio.h>
int main()
{
    int arr[5];
    int sum=0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }

    printf("%d", sum);
    
    return 0;
}
```

#### Attachments

![array diagram.png](<August/04-08-2026/array diagram.png>)

![Graph diagram.png](<August/04-08-2026/Graph diagram.png>)

![Linked-list diagram.webp](<August/04-08-2026/Linked-list diagram.webp>)

![Queue-Data-Structures diagram.png](<August/04-08-2026/Queue-Data-Structures diagram.png>)

![stack diagram.png](<August/04-08-2026/stack diagram.png>)

![tree diagram.png](<August/04-08-2026/tree diagram.png>)


### 05-08-2026

#### LinearSearchSorted.c

```c
// Q. Linear search in sorted arrays?

#include<stdio.h>

// Function to take input
void inputArray(int arr[], int n){

    printf("Enter array element in sorted mannar:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
}

// Function to display array
void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }
    
}

int linearSearchOnSorted(int arr[], int n , int key){
    
    for (int i = 0; i < n; i++)
    {
        // if arrays is sorted then check element is greater than 
        // from current if yes then break the loop
        if (arr[i]>key)
        {
            return -1;
        }

        if (arr[i]==key)
        {
            return i; //return index
        }        
    }
    return -1;
    
}

int main()
{
    
        int arr[100];
        int n , key;

        printf("Enter the size of arrays: ");
        scanf("%d", &n);

        inputArray(arr, n);        
        displayArray(arr, n);
        
        printf("Enter Key to find the element: ");
        scanf("%d", &key);

    

    int position =linearSearchOnSorted(arr, n , key);

    if (position== -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element %d found at position: %d " , key, position+1);
    }

    return 0;
}

```

#### Program1.c

```c
#include <stdio.h>

// Function Declarations
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
int linearSearch(int arr[], int n, int key);

int main()
{
    int arr[100];
    int n, key, position;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Function to take array input
    inputArray(arr, n);

    // Function to display array
    printf("\nArray Elements are:\n");
    displayArray(arr, n);

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Function to search
    position = linearSearch(arr, n, key);

    if(position == -1)
        printf("Element Not Found");
    else
        printf("Element Found at Position = %d", position + 1);

    return 0;
}

// Function to take input
void inputArray(int arr[], int n)
{
    int i;

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Function to display array
void displayArray(int arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Function to perform Linear Search
int linearSearch(int arr[], int n, int key)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}
```

#### Program2.c

```c
#include <stdio.h>

// Function Declarations
int linearSearch(int arr[],  int key);

int main()
{
    int arr[5]={11,22,33,44,55};
    
    int key;
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Function to search
   int position = linearSearch(arr, key);

    if(position == -1)
        printf("Element Not Found");
    else
        printf("Element Found at Position = %d", position + 1);

    return 0;
}

// Function to perform Linear Search
int linearSearch(int arr[], int key)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
```

#### Attachments

- [Linear Search Algorithm Animation.mp4](<August/05-08-2026/Linear Search Algorithm Animation.mp4>)
![Linear Search.png](<August/05-08-2026/Linear Search.png>)

![LinearSearchStepByStep.png](<August/05-08-2026/LinearSearchStepByStep.png>)


### 06-08-2026

#### Homework.md


# Todays Homework Problem 

# 1. Find the position of element 64 using binary search method in an array given as
    {12, 18, 25, 31, 42, 50, 64, 72, 85}

# 2. Find the position of element 55 using binary search method in an array given as
    {10, 20, 30, 40, 50, 55, 60, 70, 80, 90}

# 3. Find the position of element 33 using binary search method in an array given as:
    {5, 11, 17, 23, 29, 33, 41, 48, 52, 60}

#### Attachments

![Binary Search.png](<August/06-08-2026/Binary Search.png>)

![BinarySearchExamQuestion.png](<August/06-08-2026/BinarySearchExamQuestion.png>)


### 07-08-2026

#### Homework.md

# Todays Binary Search Tree Homework Question.    Date: 07/08/2026

# Problem 3
Construct a Binary Search Tree using:
 45, 15, 79, 90, 10, 20, 50, 12 
 Find Preorder , Inorder , Postorder

 # Problem 4
Construct a Binary Search Tree using:
35, 20, 50, 10, 25, 45, 60, 5, 15 
Find Preorder , Inorder , Postorder

# Problem 5
Construct a Binary Search Tree using:
60, 25, 75, 10, 35, 65, 90, 5, 15, 30
Find Preorder , Inorder , Postorder

# Problem 6
Construct a Binary Search Tree using:
40, 20, 60, 10, 30, 50, 70, 25, 35, 55
Find Preorder , Inorder , Postorder

# Problem 7
Construct a Binary Search Tree using:
80, 40, 100, 20, 60, 90, 120, 10, 30, 50, 70
Find Preorder , Inorder , Postorder

# Problem 8
Construct a Binary Search Tree using:
55, 25, 75, 15, 35, 65, 85, 5, 20, 30, 40
Find Preorder , Inorder , Postorder

# Todays Homework Question On Stack   Date: 07/08/2026

# Question 2
# A stack of size 10 contains the following elements, where 90 is the TOP: 
20, 35, 45, 60, 75, 90  Perform the follwoing operation:
 1. POP() 2. PUSH(100) 3.PUSH(110) 4. POP() 5. PUSH(120)  6. POP() 7.PUSH(130)
Find:
a) Final stack
b) TOP element
c) Number of elements in the stack

# Question 3
# A stack of size 10 contains: 15, 25, 35, 45, 55, 65 where 65 is the TOP element.
Perform the following operations:
1. PUSH(75) 2.POP() 3. POP() 4. PUSH(85) 5. PUSH(95) 6. POP() 7. PUSH(105) 8. POP()

# Question 4
A stack of size 10 contains: 25, 35, 45, 55, 65, 75 where 75 is TOP.
Perform the following operations in sequence:
1. POP() 2. PUSH(85) 3. PUSH(95) 4.POP() 5. PUSH(105) 6. POP() 7. PUSH(115)
8. PUSH(125) 9. POP() 10. PUSH(135)

Find:
a) Final stack
b) TOP element
c) Number of elements in stack

#### Attachments

![PreOrder-InOrder-PostOrder Trick.png](<August/07-08-2026/PreOrder-InOrder-PostOrder Trick.png>)

![Problem1 BST.png](<August/07-08-2026/Problem1 BST.png>)

![StackQ4Ans.png](<August/07-08-2026/StackQ4Ans.png>)

![stackQ5Ans.png](<August/07-08-2026/stackQ5Ans.png>)


### 08-08-2026

#### Binary Search Tree Homework answer.md

# Binary Search Tree

# Problem 1
Construct a BST using the following elements:

50, 30, 70, 20, 40, 60, 80

#        50
#       /  \
#     30    70
#    / \    / \
#  20  40 60  80

Preorder Traversal (Root → Left → Right)
#	50, 30, 20, 40, 70, 60, 80
Inorder Traversal (Left → Root → Right)
#	20, 30, 40, 50, 60, 70, 80
Postorder Traversal (Left → Right → Root)
#	20, 40, 30, 60, 80, 70, 50



# Problem 2
Construct a BST using:

22, 27, 14, 31, 40, 43, 44, 10, 20, 35

#          22
#         /  \
#       14    27
#      / \      \
#    10  20      31
#                  \
#                  40
#                 /  \
#               35   43
#                      \
#                      44

Preorder Traversal (Root → Left → Right)
#	22, 14, 10, 20, 27, 31, 40, 35, 43, 44

Inorder Traversal (Left → Root → Right)
#	10, 14, 20, 22, 27, 31, 35, 40, 43, 44

Postorder Traversal (Left → Right → Root)
#    10, 20, 14, 35, 44, 43, 40, 31, 27, 22


# Problem 3
Construct a BST using:

 45, 15, 79, 90, 10, 20, 50, 12

#        45
#        /  \
#      15    79
#     / \   / \
#   10 20 50 90
#     \
#     12

Preorder Traversal (Root → Left → Right)
#    45, 15, 10, 12, 20, 79, 50, 90
Inorder Traversal (Left → Root → Right)
#    10, 12, 15, 20, 45, 50, 79, 90	
Postorder Traversal (Left → Right → Root)
#    12, 10, 20, 15, 50, 90, 79, 45


# Problem 4
Construct a BST using:

35, 20, 50, 10, 25, 45, 60, 5, 15

#           35
#         /    \
#       20      50
#      / \     / \
#    10  25   45 60
#   / \
#  5  15

Preorder Traversal (Root → Left → Right)
#   35, 20, 10, 5, 15, 25, 50, 45, 60

Inorder Traversal (Left → Root → Right)
#   5, 10, 15, 20, 25, 35, 45, 50, 60

Postorder Traversal (Left → Right → Root)
#   5, 15, 10, 25, 20, 45, 60, 50, 35


# Problem 5
Construct a BST using:

60, 25, 75, 10, 35, 65, 90, 5, 15, 30

#            60
#          /    \
#        25      75
#       /  \    /  \
#     10   35  65  90
#    / \   /
#   5 15 30

Preorder Traversal (Root → Left → Right)
#   60, 25, 10, 5, 15, 35, 30, 75, 65, 90

Inorder Traversal (Left → Root → Right)
#   5, 10, 15, 25, 30, 35, 60, 65, 75, 90

Postorder Traversal (Left → Right → Root)
#   5, 15, 10, 30, 35, 25, 65, 90, 75, 60


# Problem 6
Construct a BST using:

40, 20, 60, 10, 30, 50, 70, 25, 35, 55

#             40
#           /    \
#         20      60
#        / \     / \
#      10 30   50 70
#         / \    \
#        25 35   55
Preorder	40, 20, 10, 30, 25, 35, 60, 50, 55, 70
Inorder	    10, 20, 25, 30, 35, 40, 50, 55, 60, 70
Postorder	10, 25, 35, 30, 20, 55, 50, 70, 60, 40


# Problem 7
Construct a BST using:

80, 40, 100, 20, 60, 90, 120, 10, 30, 50, 70

#              80
#             /    \
#           40      100
#          / \      /  \
#        20  60   90 120
#       / \  / \
#     10 30 50 70


Preorder	80, 40, 20, 10, 30, 60, 50, 70, 100, 90, 120
Inorder	    10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 120
Postorder	10, 30, 20, 50, 70, 60, 40, 90, 120, 100, 80

# Problem 8
Construct a BST using:

55, 25, 75, 15, 35, 65, 85, 5, 20, 30, 40

#             55
#           /    \
#         25      75
#        / \     / \
#      15 35   65 85
#     / \ / \
#    5 20 30 40


Preorder	55, 25, 15, 5, 20, 35, 30, 40, 75, 65, 85
Inorder 	5, 15, 20, 25, 30, 35, 40, 55, 65, 75, 85
Postorder	5, 20, 15, 30, 40, 35, 25, 65, 85, 75, 55


# Problem 9
Construct a BST using:

100, 50, 150, 25, 75, 125, 175, 60, 80

#             100
#            /   \
#          50     150
#         / \     / \
#       25 75   125 175
#          / \
#        60 80


Preorder	100, 50, 25, 75, 60, 80, 150, 125, 175
Inorder	    25, 50, 60, 75, 80, 100, 125, 150, 175
Postorder	25, 60, 80, 75, 50, 125, 175, 150, 100



# Problem 10
Construct a BST using:

65, 45, 85, 35, 55, 75, 95, 25, 40, 50, 60

#               65
#             /    \
#           45      85
#          / \     / \
#        35 55   75 95
#       / \ / \
#     25 40 50 60


Preorder	65, 45, 35, 25, 40, 55, 50, 60, 85, 75, 95
Inorder	    25, 35, 40, 45, 50, 55, 60, 65, 75, 85, 95
Postorder	25, 40, 35, 50, 60, 55, 45, 75, 95, 85, 65

#### BubbleSortProgram.c

```c
#include<stdio.h>

    void bubbleSort(int arr[], int n){

        int temp, itr=0, pass=0;

        for (int i = 0; i < n-1; i++)
        { int flag=0;
            
            for (int j = 0; j < n-1-i; j++)
            {
                itr++;
                    if (arr[j]> arr[j+1])
                    {
                        //swapping
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        flag=1;
                    }
            }
            pass++;
            if (flag==0)
            {
                break;
            }
        }
        
        printf("\nTotal Passes are: %d",pass);
        printf("\nTotal Iteration are: %d",itr);
    }


    void inputArray(int arr[], int n){
        printf("Enter Array element: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n){
    printf("\nArrays elements are:");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }
}

int main()
{

    int arr[100];
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    inputArray(arr,n);
    displayArray(arr, n);

    bubbleSort(arr, n);
    
    printf("\nAfter Sorting : ");
    displayArray(arr,n);
     
    return 0;
}
```

#### Homework.md

# Todays Homework Question on Bubble Sort 08/08/2026

# 1.Sort the following numbers in ascending order using Bubble Sort: 
{19, 2, 27, 3, 7, 5 , 31} and write the output after each iteration.

# 2.Sort the following numbers in ascending order using Bubble Sort: 
{475, 15, 513, 6753, 45, 118} and write the output after each iteration.

# 3.Sort the following numbers in ascending order using Bubble Sort: 
{45, 12, 78, 23, 9, 56 , 34} and write the output after each iteration

# 4.Sort the following numbers in ascending order using Bubble sort.
Number : {16, 23, 13, 9, 7, 5} and write the output after each iteration.

#### stack Homework answer.md

# Question 1

# A stack is implemented using an array of size 10. Initially, the stack contains the following elements, where 50 is the TOP element: 10, 20, 30, 40, 50

# Perform the following operations:

# PUSH(60)
# PUSH(70)
# POP()
# PUSH(80)
# POP()
# PUSH(90)

Answer:

| Step | Operation              | Stack (TOP → Bottom)           |
| ---- | ---------------------- | ------------------------------ |
| 1    | Initial                | 50, 40, 30, 20, 10             |
| 2    | PUSH(60)               | 60, 50, 40, 30, 20, 10         |
| 3    | PUSH(70)               | 70, 60, 50, 40, 30, 20, 10     |
| 4    | POP() → **70 deleted** | 60, 50, 40, 30, 20, 10         |
| 5    | PUSH(80)               | 80, 60, 50, 40, 30, 20, 10     |
| 6    | POP() → **80 deleted** | 60, 50, 40, 30, 20, 10         |
| 7    | PUSH(90)               | **90, 60, 50, 40, 30, 20, 10** |


# Question 2

# A stack of size 10 contains the following elements, where 90 is the TOP: 20, 35, 45, 60, 75, 90

Perform:

# POP()
# PUSH(100)
# PUSH(110)
# POP()
# PUSH(120)
# POP()
# PUSH(130)

# Find:
# a) Elements deleted by POP operations
# b) Final stack
# c) TOP element
# d) Number of elements in the stack

Answer:
| Step | Operation               | Stack (TOP → Bottom)             |
| ---- | ----------------------- | -------------------------------- |
| 1    | Initial                 | 90, 75, 60, 45, 35, 20           |
| 2    | POP() → **90 deleted**  | 75, 60, 45, 35, 20               |
| 3    | PUSH(100)               | 100, 75, 60, 45, 35, 20          |
| 4    | PUSH(110)               | 110, 100, 75, 60, 45, 35, 20     |
| 5    | POP() → **110 deleted** | 100, 75, 60, 45, 35, 20          |
| 6    | PUSH(120)               | 120, 100, 75, 60, 45, 35, 20     |
| 7    | POP() → **120 deleted** | 100, 75, 60, 45, 35, 20          |
| 8    | PUSH(130)               | **130, 100, 75, 60, 45, 35, 20** |




# Question 3

# A stack of size 10 contains: 15, 25, 35, 45, 55, 65 where 65 is the TOP element.

Perform the following operations:

# PUSH(75)
# POP()
# POP()
# PUSH(85)
# PUSH(95)
# POP()
# PUSH(105)
# POP()

Answer: 

| Step | Operation               | Stack (TOP → Bottom)        |
| ---- | ----------------------- | --------------------------- |
| 1    | Initial                 | 65, 55, 45, 35, 25, 15      |
| 2    | PUSH(75)                | 75, 65, 55, 45, 35, 25, 15  |
| 3    | POP() → **75 deleted**  | 65, 55, 45, 35, 25, 15      |
| 4    | POP() → **65 deleted**  | 55, 45, 35, 25, 15          |
| 5    | PUSH(85)                | 85, 55, 45, 35, 25, 15      |
| 6    | PUSH(95)                | 95, 85, 55, 45, 35, 25, 15  |
| 7    | POP() → **95 deleted**  | 85, 55, 45, 35, 25, 15      |
| 8    | PUSH(105)               | 105, 85, 55, 45, 35, 25, 15 |
| 9    | POP() → **105 deleted** | **85, 55, 45, 35, 25, 15**  |


#### Attachments

![Bubble sort Q1.png](<August/08-08-2026/Bubble sort Q1.png>)

![Bubble sort Q2.png](<August/08-08-2026/Bubble sort Q2.png>)

![Bubble sort Q3.png](<August/08-08-2026/Bubble sort Q3.png>)


### 09-08-2026

#### Stack.c

```c
#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int item)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = item;

        printf("%d pushed into stack\n", item);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Top element = %d\n", stack[top]);
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack elements:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    peek();

    pop();

    display();

    return 0;
}
```


### 12-08-2026

#### BinarySearchAlgorithm.c

```c
#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    int mid;
    int itr=0;
    while (left <= right)
    {
        itr++;
        mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            printf("Number of Iteration : %d", itr);
            return mid;   // Element found
        }
        else if (key < arr[mid])
        {
            right = mid - 1;   // Search left side
        }
        else
        {
            left = mid + 1;    // Search right side
        }
    }
    printf("Number of Iteration : %d", itr);
    return -1;  // Element not found
}

int main()
{
    int arr[100], n, key, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Element are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%4d",arr[i]);
    }
    
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result != -1)
    {
        printf("\nElement %d found at position %d\n", key, result + 1);
    }
    else
    {
        printf("\nElement %d not found\n", key);
    }

    return 0;
}


/*
Best Case	    O(1)    	Element is found at the middle in the first comparison
Average Case	O(log n)	Element is usually found after several divisions
Worst Case	    O(log n)	Element is found at the last possible comparison or is absent
*/
```


### 19-08-2026

#### Homework.md

# Today's Homework Problem on Selection sort   19/08/2026

# Q1. Sort the given data of array using selection sort.              Summer-2026 Q6-A  6Marks
  70, 10, 20, 5, 30  Show each iteration properly.

# Q2 Sort the following number using selection sort.                 Winter-2024  Q6-A 6marks
{35, 14, 5, 102, 61, 10} write the output after each iteration

# Q3 Describe the working of selection sort method with an example   Winter-2025 Q2-B 4marks

# Q4 sort given input list in ascending order using selection sort.  Summer-2025 Q6-A 6marks
{ 16, 22, 12, 56, 65, 78 }

# Today's Homework Problem on CPP               19/08/2026
# Q1 Write a program to define class ‘staff’ with datamembers, name, designation
#    & experience in years. Accept data for five objects from the user. 
#   Display the name of staff who are manager                        Winter-2024 Q5-A  6 Marks
                                                               

# Q2 Write a C++ program to define a class Vehicle with data members modelName, 
#  company and mileage. Accept data for five objects from the user. 
#  Display the modelName, company of the vehicle having the mileage above 80.

# Q3 Write a C++ program to define a class Movie with data members title, language and rating. 
#    Accept data for five objects from the user. Display the titles of movies having 
#    a rating greater than 8

# Q4 Write a C++ program to define a class BankAccount with data members accountNo, 
#    holderName and balance. Accept data for five objects from the user. Display the account 
#    holder's name and accountNo whos balance is less than 3000.

#### SelectionSort.c

```c
#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, min, temp;
int pass=0, itr=0;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        
        for(j = i + 1; j < n; j++)
        {
            itr++;
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        pass++;

        // Swap
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("%d", pass);
    printf("%d",itr);
}

void displayArray(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {30, 20, 60, 50, 10, 40};
    int n = 6;
    int i;

    printf("\nBefore Sorted array elements: ");
    displayArray(arr, n);

    selectionSort(arr, n);
    
    printf("\nAfter Sorted Array elements: ");
    displayArray(arr, n);
    

    return 0;
}
```

#### Attachments

![SelectionSortWorking.png](<August/19-08-2026/SelectionSortWorking.png>)


### 27-08-2026

#### HomeworkSolution.md

# Q1 Arrange the given numbers in ascending order using insertion sort.
    Numbers: 77, 33, 44, 11, 88, 22, 66, 55
# Soln.

Initial Data:

77 | 33  44  11  88  22  66  55
↑      ↑
Sorted       Unsorted

After Pass 1
33  77 | 44  11  88  22  66  55
<------>   <-------------------->
 Sorted          Unsorted

After Pass 2
33  44  77 | 11  88  22  66  55
<---------->   <---------------->
    Sorted           Unsorted

After Pass 3
11  33  44  77 | 88  22  66  55
<-------------->   <------------>
      Sorted           Unsorted

After Pass 4
11  33  44  77  88 | 22  66  55
<------------------>   <-------->
        Sorted           Unsorted

After Pass 5
11  22  33  44  77  88 | 66  55
<---------------------->   <---->
          Sorted          Unsorted

After Pass 6
11  22  33  44  66  77  88 | 55
<-------------------------->   <-->
            Sorted           Unsorted

After Pass 7
11  22  33  44  55  66  77  88
<-------------------------------->
              Sorted



# Q2.Arrange the given numbers in ascending order using insertion sort.
     Numbers: 45, 22, 8, 34, 19

Initial Data
45 | 22  8  34  19
<->   <------------>
Sorted     Unsorted

After Pass 1
22  45 | 8  34  19
<------>  <--------->
 Sorted      Unsorted

After Pass 2
8  22  45 | 34  19
<--------->  <------>
   Sorted     Unsorted

After Pass 3
8  22  34  45 | 19
<------------->  <->
     Sorted     Unsorted

After Pass 4
8  19  22  34  45
<----------------->
       Sorted


# Q3.Arrange the given numbers in ascending order using insertion sort.
     Numbers: 2, 15, 42, 26, 39, 92, 20

Initial Data
2 | 15  42  26  39  92  20
<->   <-------------------->
Sorted       Unsorted

After Pass 1
2  15 | 42  26  39  92  20
<---->  <---------------->
Sorted       Unsorted

After Pass 2
2  15  42 | 26  39  92  20
<--------->  <------------>
   Sorted       Unsorted

After Pass 3
2  15  26  42 | 39  92  20
<------------->  <-------->
     Sorted       Unsorted

After Pass 4
2  15  26  39  42 | 92  20
<----------------->  <----->
       Sorted       Unsorted

After Pass 5
2  15  26  39  42  92 | 20
<---------------------->  <->
          Sorted        Unsorted

After Pass 6
2  15  20  26  39  42  92
<------------------------->
           Sorted


# Q4. Sort the following array in ascending order using insertion sort  Summer-2025 Q2-A 4M
      30, 10, 40, 50, 20, 45                    
# Q5 Sort the following numbers in ascending order using insertion sort :– Winter-2025 Q6-A 6M
    {25, 15, 4, 103, 62, 9} and write the output after each iteration


# Draw binary tree for the given expression. Write preorder and postorder traversal for it.  Summer-2026 Q4-D 4M

Expression: 10 / 20 ^ 30 * 40 % 50
Sol:

Apply operator precedence

Operator precedence:
^ → highest
/, *, % → same precedence, evaluated from left to right

Therefore: 10 / (20 ^ 30) * 40 % 50

The binary expression tree is:

                    %
                  /   \
                 *     50
               /   \
              /     40
            /   \
          10     ^
                / \
               20  30






# Today's Homework On Insertion Sort                 Date:  27-08-2026

# Q1 Arrange the given numbers in ascending order using insertion sort.
    Numbers: 77, 33, 44, 11, 88, 22, 66, 55 
    and write the output after each iteration

# Q2.Arrange the given numbers in ascending order using insertion sort.
     Numbers: 45, 22, 8, 34, 19
     and write the output after each iteration


# Q3.Arrange the given numbers in ascending order using insertion sort.     Winter 2025
     Numbers: 2, 15, 42, 26, 39, 92, 20
     and write the output after each iteration

# Q4.Arrange the given numbers in ascending order using insertion sort.     S-17 W-22
     Numbers:  10 , 40 ,50, 45 ,20 , 6      
     and write the output after each iteration                                 



#### InsertionSort.c

```c
/*
Insertion Sort algorithms
*/
#include <stdio.h>
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key,
           to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, n);
    
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
```

#### Attachments

![insertionSort1.png](<August/27-08-2026/insertionSort1.png>)

![InsertionSort2.png](<August/27-08-2026/InsertionSort2.png>)

![InsertionSort3.png](<August/27-08-2026/InsertionSort3.png>)


## September

### 03-09-2026

#### LinkedList1.c

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *first;
    first=(struct Node*)malloc(sizeof(struct Node));
    
    first->data=4;
    first->next=NULL;

    printf("Data in the first node: %d\n", first->data);

    return 0;
}
```

#### LinkedList2.c

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *first ,*second;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));

    first->data=4;
    first->next=second;
    second->data=8;
    second->next=NULL;

    printf("Data in the first node: %d\n", first->data);    
    printf("Data in the second node: %d\n", second->data);
    

    return 0;
}
```

#### LinkedList3.c

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *first ,*second, *third;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    

    first->data=4;
    first->next=second;
    second->data=8;
    second->next=third;
    third->data=12;
    third->next=NULL;

    printf("Data in the first node: %d\n", first->data);
    printf("Data in the second node: %d\n", second->data);
    printf("Data in the third node: %d\n", third->data);

    return 0;
}
```

#### LinkedList4.c

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *first ,*second, *third, *fourth;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    first->data=4;
    first->next=second;
    second->data=8;
    second->next=third;
    third->data=12;
    third->next=fourth;
    fourth->data=16;
    fourth->next=NULL;

    printf("Data in the first node: %d\n", first->data);
    printf("Data in the fourth node: %d\n", fourth->data);
    printf("Data in the second node: %d\n", second->data);
    printf("Data in the third node: %d\n", third->data);

    return 0;
}
```


### 04-09-2026

#### LinkedList5.c

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *first ,*second, *third, *fourth;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    first->data=4;
    first->next=second;
    second->data=8;
    second->next=third;
    third->data=12;
    third->next=fourth;
    fourth->data=16;
    fourth->next=NULL;

    printf("Data in the first node: %d\n", first->data);
    printf("Data in the fourth node: %d\n", fourth->data);
    printf("Data in the second node: %d\n", second->data);
    printf("Data in the third node: %d\n", third->data);

//We can print also like this using the first pointer and next pointer of each node.
    printf("Data in the first node: %d\n", first->data);
    printf("Data in the second node: %d\n", first->next->data);
    printf("Data in the third node: %d\n", first->next->next->data);
    printf("Data in the fourth node: %d\n", first->next->next->next->data);

    return 0; 
}
```

#### LinkedList6.c

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){

    struct Node *head, *current;

    int num;
    printf("Enter Number of node want to add: ");
    scanf("%d",&num);

    head=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for 1: ");
    scanf("%d",&head->data);
    head->next=NULL;

    current=head;

    for (int i = 2; i <=num; i++)
    {
        current->next=(struct Node *)malloc(sizeof(struct Node));
        current=current->next;
        printf("Enter the data for %d: ", i);
        scanf("%d",&current->data);
        current->next=NULL;
    }

    return 0;
}
```


### 07-09-2026

#### LinkedList7.c

```c
// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// int main(){

//     struct Node *head, *current;

//     int num;
//     printf("Enter Number of node want to add: ");
//     scanf("%d",&num);

//     head=(struct Node *)malloc(sizeof(struct Node));
//     printf("Enter the data for 1: ");
//     scanf("%d",&head->data);
//     head->next=NULL;

//     current=head;

//     for (int i = 2; i <=num; i++)
//     {
//         current->next=(struct Node *)malloc(sizeof(struct Node));
//         current=current->next;
//         printf("Enter the data for %d: ", i);
//         scanf("%d",&current->data);
//         current->next=NULL;

//     }
        
//      // Print linked list
//     printf("\nLinked List:\n");
//      current = head;

//      while (current!=NULL)
//      {
//         printf("%4d ->",current->data);
//         current=current->next;
//      }
//      printf("NULL\n");
     

//     return 0;
// }








#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){

    struct Node *head , *current , *temp;

    int num;
    printf("Enter the number of node want to add: ");
    scanf("%d",&num);

    head=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);
    head->next=NULL;

    current=head;

    for (int i = 2; i <=num; i++)
    {
        current->next=(struct Node *)malloc(sizeof(struct Node));
        current=current->next;

        printf("Enter the data for node: %d " ,i);
        scanf("%d",&current->data);
        current->next=NULL;
    }

    // Print linked list
     printf("\nLinked List:\n");

    temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    return 0;
}
```

#### LinkedList8.c

```c
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node* createList(int num)
{
    struct Node *head, *current;

    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;

    current = head;

    for (int i = 2; i <= num; i++)
    {
        current->next = (struct Node *)malloc(sizeof(struct Node));

        current = current->next;

        printf("Enter the data for node: %d ", i);
        scanf("%d", &current->data);

        current->next = NULL;
    }

    return head;
}

// Function to print linked list
void displayList(struct Node *head)
{
    struct Node *temp;

    printf("\nLinked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    struct Node *head;

    int num;

    printf("Enter the number of node want to add: ");
    scanf("%d", &num);

    head = createList(num);

    displayList(head);

    return 0;
}
```


### 11-09-2026

#### LinkedList10.c

```c


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node* createList(int num)
{
    struct Node *head, *current;

    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;

    current = head;

    for (int i = 2; i <= num; i++)
    {
        current->next = (struct Node *)malloc(sizeof(struct Node));

        current = current->next;

        printf("Enter the data for node: %d ", i);
        scanf("%d", &current->data);

        current->next = NULL;
    }

    return head;
}

// Function to print linked list
void displayList(struct Node *head)
{
    struct Node *temp;

    printf("\nLinked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Function to count nodes
int countNode(struct Node *head)
{
    struct Node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}



// Function to search a node
void searchNode(struct Node *head)
{
    struct Node *temp;
    int search, position = 1, found = 0;

    printf("\nEnter the data to search: ");
    scanf("%d", &search);

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == search)
        {
            printf("Node found at position %d\n", position);
            found = 1;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (found == 0)
    {
        printf("Node not found\n");
    }
}


int main()
{
    struct Node *head;

    int num,count;

    printf("Enter the number of node want to add: ");
    scanf("%d", &num);

    head = createList(num);

    displayList(head);

    count=countNode(head);
    printf("\nTotal number of node are : %d\n" ,count);

    searchNode(head);
    return 0;
}


```

#### LinkedList11.c

```c


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node* createList(int num)
{
    struct Node *head, *current;

    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;

    current = head;

    for (int i = 2; i <= num; i++)
    {
        current->next = (struct Node *)malloc(sizeof(struct Node));

        current = current->next;

        printf("Enter the data for node: %d ", i);
        scanf("%d", &current->data);

        current->next = NULL;
    }

    return head;
}

// Function to print linked list
void displayList(struct Node *head)
{
    struct Node *temp;

    printf("\nLinked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Function to count nodes
int countNode(struct Node *head)
{
    struct Node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}



// Function to search a node
void searchNode(struct Node *head)
{
    struct Node *temp;
    int search, position = 1, found = 0;

    printf("\nEnter the data to search: ");
    scanf("%d", &search);

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == search)
        {
            printf("Node found at position %d\n", position);
            found = 1;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (found == 0)
    {
        printf("Node not found\n");
    }
}

// Function to insert node at end
struct Node* insertAtEnd(struct Node *head)
{
    struct Node *temp;
    struct Node *newNode;

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter data for new node: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    // If linked list is empty
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    // Go to last node
    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Connect last node to new node
    temp->next = newNode;

    return head;
}

int main()
{
    struct Node *head;

    int num,count;

    printf("Enter the number of node want to add: ");
    scanf("%d", &num);

    head = createList(num);

    displayList(head);

    count=countNode(head);
    printf("\nTotal number of node are : %d\n" ,count);

    searchNode(head);

    head = insertAtEnd(head);

    printf("\nAfter insertion:");
    displayList(head);

    
    return 0;
}


```

#### LinkedList9.c

```c

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node* createList(int num)
{
    struct Node *head, *current;

    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;

    current = head;

    for (int i = 2; i <= num; i++)
    {
        current->next = (struct Node *)malloc(sizeof(struct Node));

        current = current->next;

        printf("Enter the data for node: %d ", i);
        scanf("%d", &current->data);

        current->next = NULL;
    }

    return head;
}

// Function to print linked list
void displayList(struct Node *head)
{
    struct Node *temp;

    printf("\nLinked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Function to count nodes
int countNode(struct Node *head)
{
    struct Node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    struct Node *head;

    int num,count;

    printf("Enter the number of node want to add: ");
    scanf("%d", &num);

    head = createList(num);

    displayList(head);

    count=countNode(head);
    printf("\nTotal number of node are : %d\n" ,count);
    return 0;
}


```


### 12-09-2026

#### LinkedList12.c

```c


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node* createList(int num)
{
    struct Node *head, *current;

    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;

    current = head;

    for (int i = 2; i <= num; i++)
    {
        current->next = (struct Node *)malloc(sizeof(struct Node));

        current = current->next;

        printf("Enter the data for node: %d ", i);
        scanf("%d", &current->data);

        current->next = NULL;
    }

    return head;
}

// Function to print linked list
void displayList(struct Node *head)
{
    struct Node *temp;

    printf("\nLinked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Function to count nodes
int countNode(struct Node *head)
{
    struct Node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}



// Function to search a node
void searchNode(struct Node *head)
{
    struct Node *temp;
    int search, position = 1, found = 0;

    printf("\nEnter the data to search: ");
    scanf("%d", &search);

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == search)
        {
            printf("Node found at position %d\n", position);
            found = 1;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (found == 0)
    {
        printf("Node not found\n");
    }
}

// Function to insert node at end
struct Node* insertAtEnd(struct Node *head)
{
    struct Node *temp;
    struct Node *newNode;

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter data for new node: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    // If linked list is empty
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    // Go to last node
    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Connect last node to new node
    temp->next = newNode;

    return head;
}

// Function to insert node at starting
struct Node* insertAtStart(struct Node *head)
{
    struct Node *newNode;

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter data for new node: ");
    scanf("%d", &newNode->data);

    // New node points to current head
    newNode->next = head;

    // New node becomes head
    head = newNode;

    return head;
}

int main()
{
    struct Node *head;

    int num,count;

    printf("Enter the number of node want to add: ");
    scanf("%d", &num);

    head = createList(num);

    displayList(head);

    count=countNode(head);
    printf("\nTotal number of node are : %d\n" ,count);

    searchNode(head);

    head = insertAtEnd(head);

    printf("\nAfter insertion:");
    displayList(head);


    head = insertAtStart(head);

    printf("\nAfter insertion:");
    displayList(head);
    
    return 0;
}


```

#### LinkedList13.c

```c


#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node* createList(int num)
{
    struct Node *head, *current;

    head = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data for node 1: ");
    scanf("%d", &head->data);

    head->next = NULL;

    current = head;

    for (int i = 2; i <= num; i++)
    {
        current->next = (struct Node *)malloc(sizeof(struct Node));

        current = current->next;

        printf("Enter the data for node: %d ", i);
        scanf("%d", &current->data);

        current->next = NULL;
    }

    return head;
}

// Function to print linked list
void displayList(struct Node *head)
{
    struct Node *temp;

    printf("\nLinked List:\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Function to count nodes
int countNode(struct Node *head)
{
    struct Node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}



// Function to search a node
void searchNode(struct Node *head)
{
    struct Node *temp;
    int search, position = 1, found = 0;

    printf("\nEnter the data to search: ");
    scanf("%d", &search);

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == search)
        {
            printf("Node found at position %d\n", position);
            found = 1;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (found == 0)
    {
        printf("Node not found\n");
    }
}

// Function to insert node at end
struct Node* insertAtEnd(struct Node *head)
{
    struct Node *temp;
    struct Node *newNode;

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter data for new node: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    // If linked list is empty
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    // Go to last node
    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Connect last node to new node
    temp->next = newNode;

    return head;
}

// Function to insert node at starting
struct Node* insertAtStart(struct Node *head)
{
    struct Node *newNode;

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter data for new node: ");
    scanf("%d", &newNode->data);

    // New node points to current head
    newNode->next = head;

    // New node becomes head
    head = newNode;

    return head;
}


struct Node* insertInBetween(struct Node *head)
{
    struct Node *temp, *newNode;
    int position;

    printf("\nEnter position to insert: ");
    scanf("%d", &position);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter data for new node: ");
    scanf("%d", &newNode->data);

    temp = head;

    // Move temp to the node before the required position
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    // Connect new node
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

int main()
{
    struct Node *head;

    int num,count;

    printf("Enter the number of node want to add: ");
    scanf("%d", &num);

    head = createList(num);

    displayList(head);

    count=countNode(head);
    printf("\nTotal number of node are : %d\n" ,count);

    searchNode(head);

    head = insertAtEnd(head);

    printf("\nAfter insertion:");
    displayList(head);


    head = insertAtStart(head);

    printf("\nAfter insertion:");
    displayList(head);


    head = insertInBetween(head);

    printf("\nAfter insertion:");
    displayList(head);
    
    return 0;
}


```


### 13-09-2026

#### BubbleSort.c

```c
/*Write a code for bubble sort*/
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
```

#### InsertionSort.c

```c
/*Write a code for insertion sort*/
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
```

#### MergeSort.c

```c
/*Write a code for merge sort*/
#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
```

#### QuickSort.c

```c
/*Write a code for quick sort*/
#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
```

#### SelectionSort.c

```c
/*Write a code for selection sort*/
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
```


### 15-09-2026

#### InfixEvaluation.c

```c
/*Write a code for evaluating infix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int getPrecedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

int evaluateInfix(char* infix) {
    int i, top = -1;
    int stack[MAX_SIZE];

    for (i = 0; infix[i] != '\0'; i++) {
        if (isdigit(infix[i])) {
            stack[++top] = infix[i] - '0';
        } else if (isOperator(infix[i])) {
            int operand2 = stack[top--];
            int operand1 = stack[top--];
            switch (infix[i]) {
                case '+':
                    stack[++top] = operand1 + operand2;
                    break;
                case '-':
                    stack[++top] = operand1 - operand2;
                    break;
                case '*':
                    stack[++top] = operand1 * operand2;
                    break;
                case '/':
                    stack[++top] = operand1 / operand2;
                    break;
                case '^':
                    stack[++top] = pow(operand1, operand2);
                    break;
            }
        }
    }
    return stack[top];
}

int main() {
    char infix[100];
    int result;
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = 0; // Remove newline character
    result = evaluateInfix(infix);
    printf("Result: %d\n", result);
    return 0;
}
```

#### infixToPostfix.c

```c
/*Write a code for converting infix expression to postfix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int precedence(char operator) {
    switch (operator) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void infixToPostfix(char* infix, char* postfix) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    for (i = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            stack[++top] = infix[i];
        } else if (infix[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top != -1) {
                top--;
            }
        } else if (isOperator(infix[i])) {
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i])) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }

    while (top != -1) {
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
}

int main() {
    char infix[100], postfix[100];
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = 0; // Remove newline character
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
```

#### infixToPrefix.c

```c
/*Write a code for converting infix expression to prefix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int getPrecedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void infixToPrefix(char* infix, char* prefix) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    // Reverse the infix expression
    strrev(infix);

    for (i = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            prefix[j++] = infix[i];
        } else if (infix[i] == ')') {
            stack[++top] = infix[i];
        } else if (infix[i] == '(') {
            while (top != -1 && stack[top] != ')') {
                prefix[j++] = stack[top--];
            }
            if (top != -1) {
                top--;
            }
        } else if (isOperator(infix[i])) {
            while (top != -1 && getPrecedence(stack[top]) >= getPrecedence(infix[i])) {
                prefix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }

    while (top != -1) {
        prefix[j++] = stack[top--];
    }

    prefix[j] = '\0';

    // Reverse the result
    strrev(prefix);
}

int main() {
    char infix[100], prefix[100];
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = 0; // Remove newline character
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
```

#### PostfixEvaluation.c

```c
/*Write a code for evaluating postfix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int evaluatePostfix(char* postfix) {
    int i, top = -1;
    int stack[MAX_SIZE];

    for (i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            stack[++top] = postfix[i] - '0';
        } else if (isOperator(postfix[i])) {
            int operand2 = stack[top--];
            int operand1 = stack[top--];
            switch (postfix[i]) {
                case '+':
                    stack[++top] = operand1 + operand2;
                    break;
                case '-':
                    stack[++top] = operand1 - operand2;
                    break;
                case '*':
                    stack[++top] = operand1 * operand2;
                    break;
                case '/':
                    stack[++top] = operand1 / operand2;
                    break;
                case '^':
                    stack[++top] = pow(operand1, operand2);
                    break;
            }
        }
    }
    return stack[top];
}

int main() {
    char postfix[100];
    int result;
    printf("Enter a postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);
    postfix[strcspn(postfix, "\n")] = 0; // Remove newline character
    result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);
    return 0;
}
```

#### PostfixToInfix.c

```c
/*Write a code for converting postfix expression to infix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void postfixToInfix(char* postfix, char* infix) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    for (i = 0; postfix[i] != '\0'; i++) {
        if (isalnum(postfix[i])) {
            stack[++top] = postfix[i];
        } else if (isOperator(postfix[i])) {
            char operand2 = stack[top--];
            char operand1 = stack[top--];
            infix[j++] = '(';
            infix[j++] = operand1;
            infix[j++] = postfix[i];
            infix[j++] = operand2;
            infix[j++] = ')';
        }
    }
    infix[j] = '\0';
}

int main() {
    char postfix[100], infix[100];
    printf("Enter a postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);
    postfix[strcspn(postfix, "\n")] = 0; // Remove newline character
    postfixToInfix(postfix, infix);
    printf("Infix expression: %s\n", infix);
    return 0;
}
```

#### PostfixToPrefix.c

```c
/*Write a code for converting postfix expression to prefix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void postfixToPrefix(char* postfix, char* prefix) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    for (i = 0; postfix[i] != '\0'; i++) {
        if (isalnum(postfix[i])) {
            stack[++top] = postfix[i];
        } else if (isOperator(postfix[i])) {
            char operand2 = stack[top--];
            char operand1 = stack[top--];
            prefix[j++] = postfix[i];
            prefix[j++] = operand1;
            prefix[j++] = operand2;
        }
    }
    prefix[j] = '\0';
}

int main() {
    char postfix[100], prefix[100];
    printf("Enter a postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);
    postfix[strcspn(postfix, "\n")] = 0; // Remove newline character
    postfixToPrefix(postfix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
```

#### PrefixEvaluation.c

```c
/*Write a code for evaluating prefix expression*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int evaluatePrefix(char* prefix) {
    int i, top = -1;
    int stack[MAX_SIZE];

    // Process the prefix expression from right to left
    for (i = strlen(prefix) - 1; i >= 0; i--) {
        if (isdigit(prefix[i])) {
            stack[++top] = prefix[i] - '0';
        } else if (isOperator(prefix[i])) {
            int operand2 = stack[top--];
            int operand1 = stack[top--];
            switch (prefix[i]) {
                case '+':
                    stack[++top] = operand1 + operand2;
                    break;
                case '-':
                    stack[++top] = operand1 - operand2;
                    break;
                case '*':
                    stack[++top] = operand1 * operand2;
                    break;
                case '/':
                    stack[++top] = operand1 / operand2;
                    break;
                case '^':
                    stack[++top] = pow(operand1, operand2);
                    break;
            }
        }
    }
    return stack[top];
}

int main() {
    char prefix[100];
    int result;
    printf("Enter a prefix expression: ");
    fgets(prefix, sizeof(prefix), stdin);
    prefix[strcspn(prefix, "\n")] = 0; // Remove newline character
    result = evaluatePrefix(prefix);
    printf("Result: %d\n", result);
    return 0;
}
```


### 18-09-2026

#### Queue.c

```c
/*Write a code for implementing queue*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int data) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = data;
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = queue[front];
    front++;
    return data;
}

int main() {
    int choice, data;
    while (1) {
        printf("1. Enqueue\n2. Dequeue\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                data = dequeue();
                if (data != -1) {
                    printf("Dequeued data: %d\n", data);
                }
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}   
```


### 21-09-2026


