#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node. If
 * node or parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	/*given node is a valid node in the binary*/
	/*tree and that it has a parent node.*/
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/*Determine whether the given node is the left or*/
	/*right child of its parent, and return the sibling accordingly:*/
	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
