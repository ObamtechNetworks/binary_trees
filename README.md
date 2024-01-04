# Binary Trees Project
### Overview
This project focuses on implementing and manipulating binary trees in the C programming language. The project aims to enhance the understanding of fundamental data structures and algorithms related to binary trees. In a team of two, focus is to accomplish various tasks, ranging from creating basic binary trees to implementing more advanced structures like Binary Search Trees (BST), AVL Trees, and Max Binary Heaps.

# Team Members
- Collaborator 1: [Ipadeola Bamidele Michael](https://github.com/obamtechnetworks)
- Collaborator 2: [Arowolo Olasunkanmi Muritahdor](https://github.com/armolas)

# Project Timeline
- Project Start Date: January 2, 2024, 6:00 AM
- Project End Date: January 5, 2024, 6:00 AM
- Checker Release: January 3, 2024, 12:00 AM
- Auto Review Deadline: January 5, 2024

# Learning Objectives
Upon completion of this project, you are expected to:

# General
- Understand the concept of a binary tree and its components.
- Differentiate between a binary tree and a Binary Search Tree (BST).
- Analyze the potential gain in time complexity compared to linked lists.
- Comprehend the terms depth, height, and size of a binary tree.
- Implement different traversal methods to navigate through a binary tree.
- Identify characteristics of a complete, full, perfect, and balanced binary tree.

# Requirements
### General
- Allowed editors: vi, vim, emacs. 
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89. 
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called binary_trees.h
- Don’t forget to push your header file
- All your header files should be include guarded

# Data Structures
- Gain proficiency in using basic binary tree structures.
- Understand and implement Binary Search Trees (BST), AVL Trees, and Max Binary Heaps.

# Project Structure
The project involves multiple tasks, each focusing on a specific aspect of binary trees. It is essential to follow the provided structure and include necessary data structures in the header file. The project tasks range from creating new nodes to handling more complex structures like BSTs, AVL Trees, and Max Binary Heaps.

### Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
```

`typedef struct binary_tree_s binary_tree_t;`

# Binary Search Tree
`typedef struct binary_tree_s bst_t;`
# AVL Tree
`typedef struct binary_tree_s avl_t;`
# Max Binary Heap
`typedef struct binary_tree_s heap_t;`
