#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: pointer to the bthe root node of the binary tree
 *
 * Return: height of the tree or 0 if its NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lHeight, rHeight;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	return ((lHeight > rHeight ? lHeight : rHeight) + 1);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of the tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lHeight, rHeight;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);
	if (lHeight != rHeight)
		return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}
