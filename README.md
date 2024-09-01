# Binary Search Tree (BST) Operations

## Overview

This program demonstrates various operations on a Binary Search Tree (BST) in C++. It includes functionality for inserting nodes, deleting nodes, updating node values, and performing different tree traversals (pre-order, post-order, in-order, and level-order).

## Features

- **Insertion**: Adds a new value to the BST while maintaining its properties.
- **Deletion**: Removes a node with a specified key, handling various cases (no children, one child, two children).
- **Update**: Updates a node's value by deleting the existing node and inserting a new one.
- **Traversals**:
  - **Pre-order Traversal**: Visits nodes in the order: root, left subtree, right subtree.
  - **Post-order Traversal**: Visits nodes in the order: left subtree, right subtree, root.
  - **In-order Traversal**: Visits nodes in the order: left subtree, root, right subtree.
  - **Level-order Traversal**: Visits nodes level by level starting from the root.

Code Explanation

Node Structure: Defines a node with data, left, and right pointers.
Insert Function: Recursively adds a new node to the BST.
Delete Function: Removes a node, handling cases with no children, one child, or two children.
Update Function: Updates a node’s value by first deleting the existing node and then inserting a new one.
Traversal Functions:
preOrder: Uses a stack for pre-order traversal.
postOrder: Uses two stacks for post-order traversal.
inOrder: Uses a stack for in-order traversal.
levelOrder: Uses a queue for level-order traversal.
Example Output

After inserting and modifying nodes, the program performs and displays the results of the following traversals:

Pre-order traversal
Post-order traversal
In-order traversal
Level-order traversal
