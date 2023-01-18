#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if the tree is full
 * @tree: binary tree pointer
 * Return: 1 if is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
