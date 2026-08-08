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