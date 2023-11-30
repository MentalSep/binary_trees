#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root nodeo
 *
 * Return: 1 if tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);
	right = binary_tree_is_full(tree->right);
	left = binary_tree_is_full(tree->left);
	return (left * right);
}
