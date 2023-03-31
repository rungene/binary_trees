#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: (constant) pointer to the root node of the tree
 * to count the number of leaves
 *
 * Return: If tree is NULL,return 0 otherwise number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves;

	/* Empty(NULL) Tree */
	if (tree == NULL)
		return (0);
	/* Check for leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* For internal nodes, return the sum of*/
	/*leaf nodes in left and right sub-tree */
	num_leaves = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);

	return (num_leaves);
}
