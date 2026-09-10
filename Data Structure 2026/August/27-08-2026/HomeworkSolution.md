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


