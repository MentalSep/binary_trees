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
