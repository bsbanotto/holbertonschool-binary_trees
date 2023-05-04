# This is a README for 0x07. Binary Trees 0

There are 19 mandatory tasks in this project as follows

## Task 0. New node
Write a function that creates a binary tree node

-   Prototype:  `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
-   Where  `parent`  is a pointer to the parent node of the node to create
-   And  `value`  is the value to put in the new node
-   When created, a node does not have any child
-   Your function must return a pointer to the new node, or  `NULL`  on failure

## Task 1. Insert left
Write a function that inserts a node as the left-child of another node

-   Prototype:  `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
-   Where  `parent`  is a pointer to the node to insert the left-child in
-   And  `value`  is the value to store in the new node
-   Your function must return a pointer to the created node, or  `NULL`  on failure or if  `parent`  is  `NULL`
-   If  `parent`  already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

## Task 2. Insert right
Write a function that inserts a node as the right-child of another node

-   Prototype:  `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
-   Where  `parent`  is a pointer to the node to insert the right-child in
-   And  `value`  is the value to store in the new node
-   Your function must return a pointer to the created node, or  `NULL`  on failure or if  `parent`  is  `NULL`
-   If  `parent`  already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

## Task 3. Delete
Write a function that deletes an entire binary tree

-   Prototype:  `void binary_tree_delete(binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to delete
-   If  `tree`  is  `NULL`, do nothing

## Task 4. Is leaf
Write a function that checks if a node is a leaf

-   Prototype:  `int binary_tree_is_leaf(const binary_tree_t *node);`
-   Where  `node`  is a pointer to the node to check
-   Your function must return  `1`  if  `node`  is a leaf, otherwise  `0`
-   If  `node`  is  `NULL`, return  `0`

## Task 5. Is root
Write a function that checks if a given node is a root

-   Prototype:  `int binary_tree_is_root(const binary_tree_t *node);`
-   Where  `node`  is a pointer to the node to check
-   Your function must return  `1`  if  `node`  is a root, otherwise  `0`
-   If  `node`  is  `NULL`, return  `0`

## Task 6. Pre-order traversal
Write a function that goes through a binary tree using pre-order traversal

-   Prototype:  `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
-   Where  `tree`  is a pointer to the root node of the tree to traverse
-   And  `func`  is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
-   If  `tree`  or  `func`  is  `NULL`, do nothing

## Task 7. In-order traversal
Write a function that goes through a binary tree using in-order traversal

-   Prototype:  `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
-   Where  `tree`  is a pointer to the root node of the tree to traverse
-   And  `func`  is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
-   If  `tree`  or  `func`  is  `NULL`, do nothing

## Task 8. Post-order traversal
Write a function that goes through a binary tree using post-order traversal

-   Prototype:  `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
-   Where  `tree`  is a pointer to the root node of the tree to traverse
-   And  `func`  is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
-   If  `tree`  or  `func`  is  `NULL`, do nothing

## Task 9. Height
Write a function that measures the height of a binary tree

-   Prototype:  `size_t binary_tree_height(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to measure the height.
-   If  `tree`  is  `NULL`, your function must return  `0`

## Task 10. Depth
Write a function that measures the depth of a node in a binary tree

-   Prototype:  `size_t binary_tree_depth(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the node to measure the depth
-   If  `tree`  is  `NULL`, your function must return  `0`

## Task 11. Size
Write a function that measures the size of a binary tree

-   Prototype:  `size_t binary_tree_size(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to measure the size
-   If  `tree`  is  `NULL`, the function must return 0

## Task 12. Leaves
Write a function that counts the leaves in a binary tree

-   Prototype:  `size_t binary_tree_leaves(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to count the number of leaves
-   If  `tree`  is  `NULL`, the function must return 0
-   A  `NULL`  pointer is not a leaf

## Task 13. Nodes
Write a function that counts the nodes with at least 1 child in a binary tree

-   Prototype:  `size_t binary_tree_nodes(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to count the number of nodes
-   If  `tree`  is  `NULL`, the function must return 0
-   A  `NULL`  pointer is not a node

## Task 14. Balance factor
Write a function that measures the balance factor of a binary tree

-   Prototype:  `int binary_tree_balance(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to measure the balance factor
-   If  `tree`  is  `NULL`, return  `0`

## Task 15. Is full
Write a function that checks if a binary tree is full

-   Prototype:  `int binary_tree_is_full(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to check
-   If  `tree`  is  `NULL`, your function must return  `0`

## Task 16. Is perfect
Write a function that checks if a binary tree is perfect

-   Prototype:  `int binary_tree_is_perfect(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to check
-   If  `tree`  is  `NULL`, your function must return  `0`

## Task 17. Sibling
Write a function that finds the sibling of a node

-   Prototype:  `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
-   Where  `node`  is a pointer to the node to find the sibling
-   Your function must return a pointer to the sibling node
-   If  `node`  is  `NULL`  or the parent is  `NULL`, return  `NULL`
-   If  `node`  has no sibling, return  `NULL`

## Task 18. Uncle
Write a function that finds the uncle of a node

-   Prototype:  `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
-   Where  `node`  is a pointer to the node to find the uncle
-   Your function must return a pointer to the uncle node
-   If  `node`  is  `NULL`, return  `NULL`
-   If  `node`  has no uncle, return  `NULL`

# This section is a README for 0x08. Binary Trees 1

There are 6 mandatory tasks in this project as follows
## Task 0. Is BST
Write a function that checks if a binary tree is a valid  [Binary Search Tree](https://intranet.hbtn.io/rltoken/o4vcvzY3idI0WvARvKTg0w "Binary Search Tree")

-   Prototype:  `int binary_tree_is_bst(const binary_tree_t *tree);`
-   Where  `tree`  is a pointer to the root node of the tree to check
-   Your function must return  `1`  if  `tree`  is a valid BST, and  `0`  otherwise
-   If  `tree`  is  `NULL`, return  `0`

Properties of a Binary Search Tree:

-   The left subtree of a node contains only nodes with values less than the node’s value
-   The right subtree of a node contains only nodes with values greater than the node’s value
-   The left and right subtree each must also be a binary search tree
-   There must be no duplicate values

## Task 1. BST - Insert
Write a function that inserts a value in a Binary Search Tree

-   Prototype:  `bst_t *bst_insert(bst_t **tree, int value);`
-   Where  `tree`  is a double pointer to the root node of the BST to insert the value
-   And  `value`  is the value to store in the node to be inserted
-   Your function must return a pointer to the created node, or  `NULL`  on failure
-   If the address stored in  `tree`  is  `NULL`, the created node must become the root node.
-   If the value is already present in the tree, it must be ignored

Your file  `0-binary_tree_node.c`  will be compile during the correction

## Task 2. BST - Array to BST
Write a function that builds a Binary Search Tree from an array

-   Prototype:  `bst_t *array_to_bst(int *array, size_t size);`
-   Where  `array`  is a pointer to the first element of the array to be converted
-   And  `size`  is the number of element in the array
-   Your function must return a pointer to the root node of the created BST, or  `NULL`  on failure
-   If a value of the array is already present in the tree, this value must be ignored

Your files  `111-bst_insert.c`  and  `0-binary_tree_node.c`  will be compiled during the correction

## Task 3. BST - Search
Write a function that searches for a value in a Binary Search Tree

-   Prototype:  `bst_t *bst_search(const bst_t *tree, int value);`
-   Where  `tree`  is a pointer to the root node of the BST to search
-   And  `value`  is the value to search in the tree
-   Your function must return a pointer to the node containing a value equals to  `value`
-   If  `tree`  is  `NULL`  or if nothing is found, your function must return  `NULL`

## Task 4. BST - Remove
Write a function that removes a node from a Binary Search Tree

-   Prototype:  `bst_t *bst_remove(bst_t *root, int value);`
-   Where  `root`  is a pointer to the root node of the tree where you will remove a node
-   And  `value`  is the value to remove in the tree
-   Once located, the node containing a value equals to  `value`  must be removed and freed
-   If the node to be deleted has two children, it must be replaced with its first  `in-order successor`  (not predecessor)
-   Your function must return a pointer to the new root node of the tree after removing the desired value

## Task 5. What are the average time complexities of those operations on a Binary Search Tree (one answer per line):

-   Inserting the value  `n`
-   Removing the node with the value  `n`
-   Searching for a node in a BST of size nig O #BST
