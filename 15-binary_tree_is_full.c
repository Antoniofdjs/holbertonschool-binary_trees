#include "binary_trees.h"
<<<<<<< HEAD
=======

>>>>>>> 7b17a376e194a10ff5b3e3bd7887eed6f2935573
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
    {
        return (0);
    }

    if (tree->left == NULL && tree->right == NULL)
    {
        return (1);
    }

    if (tree->left != NULL || tree->right != NULL)
    {
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
    }

    return (0);
}
>>>>>>> 7b17a376e194a10ff5b3e3bd7887eed6f2935573
