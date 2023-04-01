#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL,return 0. 0 if not perfect
 * 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	/*An empty tree is perfect but we return 0*/
	/*as per requirements*/
	if (tree == NULL)
		return (1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/*if the heights are not equal, the function returns false.*/
	if (left_height != right_height)
		return (0);
	/*recursively checks the left and right subtrees. If both*/
	/*subtrees are perfect binary trees, the function returns true.*/
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->left));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure
 *the height.
 *
 * Return: If tree is NULL return 0 otherwise 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	/*tree is NULL*/
	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height += 1 + binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
