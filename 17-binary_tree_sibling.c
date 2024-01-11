#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling  node in tree.
 * @node: A pointer to node to find the sibling.
 *
 * Return: A pointer to the sibling node or NULL if not found.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
