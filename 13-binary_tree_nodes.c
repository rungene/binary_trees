#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 * 1 child in a binary tree
 * @tree: pointer to the root node of the tree to
 * count the number of nodes
 *
 * Return: If tree is NULL,return 0 otherwise
 * node counts
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	/*If the node is NULL*/
	if (tree == NULL)
		return (0);
	/*If the node has at least one child,*/
	/*it adds 1 to the count*/
	if (tree->left != NULL || tree->right != NULL)
		count = 1;
	/*recursively calls the function on the left*/
	/*and right child nodes and adds the results to the count.*/
	count += binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	return (count);
}
