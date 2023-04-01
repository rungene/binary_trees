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

	/*An empty tree is perfect but we return 0*/
	/*as per requirements*/
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1 &&
			binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree:  pointer to the root node of the tree to check
 *
 * Return: If tree is FULL,return 1 otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*If empty tree*/
	if (tree == NULL)
		return (0);
	/*If leaf node*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*If both left and right are not NULL, and left &*/
	/* right subtrees are full*/
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	/*We reach here when none of the above if conditions work*/
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the
 * balance factor
 *
 * Return: If tree is NULL, return 0 otherwise balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
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
