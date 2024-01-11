#include "binary_trees.h"

/**
 * binary_tree_leaves - counts total leaves in tree
 * @tree: pointer to root node of the tree
 * Return: total leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	int t = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		t++;

	return (t + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
