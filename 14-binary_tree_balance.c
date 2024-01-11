#include "binary_trees.h"

/**
 * binary_tree_balance - Gives balance
 * @tree: Node of binary tree
 * Return: Height of the tree, or -1 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (left_height - right_height);
		return (left_height + 1 - right_height);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
			return (left_height - right_height);
		return (left_height - (right_height + 1));
	}
}
