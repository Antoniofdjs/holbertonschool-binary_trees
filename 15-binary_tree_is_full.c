#include "binary_trees.h"
<<<<<<< HEAD
=======

>>>>>>> 7705af6a909ec93c743fa36f24c74916550884da
/**
 * binary_tree_is_full - Check if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
<<<<<<< HEAD
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
=======
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left != NULL || tree->right != NULL)
        return(binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    return (0);
}
>>>>>>> 7705af6a909ec93c743fa36f24c74916550884da
