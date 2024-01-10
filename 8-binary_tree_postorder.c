#include "binary_trees.h"

/**
 * binary_tree_postorder - prints binary tree in post traversal
 * @tree: pointer to root node of the tree
 * @func: function that prints number
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	func(tree->n); /* post order */

}
