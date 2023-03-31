#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: (constant)pointer to the node to measure the depth
 *
 * Return: If tree === NULL, return 0 otherwise depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		tree_depth = 1 + binary_tree_depth(tree->parent);
	return (tree_depth);
}
