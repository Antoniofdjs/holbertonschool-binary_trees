#include "binary_trees.h"

/**
 * binary_tree_is_root - function to determine if node is root
 * @node: node of tree
 * Return: 1 if root, 0 if null or otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
