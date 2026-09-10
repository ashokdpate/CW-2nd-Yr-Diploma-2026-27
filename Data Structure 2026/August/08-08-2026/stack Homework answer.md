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

