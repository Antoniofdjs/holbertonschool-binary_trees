#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
 * binary_tree_height - binary_tree_height
 *
 * @tree: tree
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - Checks perfect balance
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: 1 if tree is perfect balance
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, f = 0;

	if (tree == NULL)
		return (0);
	f = binary_tree_is_full(tree);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height == right_height && f)
		return (1);
	return (0);
}
