This code demonstrates various operations on a Binary Search Tree (BST) including insertion, deletion, node updating, and different tree traversals (pre-order, post-order, in-order, and level order).

Explanation:
Node Structure:
The Node structure defines a node in the binary search tree, containing an integer data, and pointers to left and right children.
Insertion:
insert function adds a new value to the BST. It recursively finds the correct position and inserts the new node while maintaining the BST property.
Deletion:
deleteNode function removes a node with a specified key. It handles three cases:
The node to be deleted has no children (leaf node).
The node has one child.
The node has two children. It replaces the node with its in-order successor (smallest node in the right subtree) and then deletes the successor.
Updating Nodes:
updateNode first deletes a node with the oldValue and then inserts a new node with newValue. This method is used to update a node’s value in the BST.
Traversals:
Pre-order Traversal (preOrder): Uses a stack to traverse the tree. It visits the root node first, then recursively visits the left and right subtrees.
Post-order Traversal (postOrder): Uses two stacks to traverse the tree. It first processes the left and right children, then the root node.
In-order Traversal (inOrder): Uses a stack to traverse the tree. It visits the left subtree, then the root node, and finally the right subtree.
Level-order Traversal (levelOrder): Uses a queue to visit nodes level by level, starting from the root.
Main Function:
Inserts nodes into the BST.
Deletes a node with value 20.
Updates a node with value 30 to 35.
Prints the results of all four traversals.
This code demonstrates how to manipulate and traverse a binary search tree using various techniques and provides a comprehensive view of BST operations.