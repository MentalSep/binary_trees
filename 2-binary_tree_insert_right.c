#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to parent node
 * @value: value to put in node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->right = parent->right;
	node->left = NULL;
	node->n = value;
	node->parent = parent;
	parent->right = node;
	if (node->right)
		node->right->parent = node;

	return (node);
}
