#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with atleast one child
 * @tree: pointer to root node of the tree
 * Return: total nodes found
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	int t = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		t++;

	return (t + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
