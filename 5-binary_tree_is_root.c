#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root -  checks if a given node is a root
 * of a binary tree
 * @node: is a pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/*Traverse upwards until you reach the root */
	while (node->left || node->right)
	{
		if (node->parent)
		{
			node = node->parent;
		}
		else
			break;
	}
	/*Check if the parent node of the root is NULL*/
	if (!node->parent)
	{
		/*True*/
		return (1);
	}
	else
	{
		/*false*/
		return (0);
	}
}
