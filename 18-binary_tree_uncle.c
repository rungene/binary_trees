#include "binary_trees.h"
/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return:  pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gradparent = node->parent->parent;
	/*checks if the node exists, if its parent exists,*/
	/*and if its grandparent exists.*/
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	/*finds the grandparent of the node and checks if*/
	/*the parent is the left or right child of the grandparent.*/
	if (gradparent->left == node->parent)
		return (gradparent->right);
	return (gradparent->left);
}
