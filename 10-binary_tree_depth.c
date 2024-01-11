#include "binary_trees.h"


/**
 * binary_tree_depth - Gives depth of node
 * @tree: node of binary tree
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
