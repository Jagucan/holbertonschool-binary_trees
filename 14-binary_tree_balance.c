#include "binary_trees.h"

/**
 * binary_tree_height - height of the binary tree.
 * @tree: is a pointer to the root node
 * Return: If node is NULL, return
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (1 + left);
	
	return (1 + right);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Is a pointer to the root node.
 * Return: The balance factor of a binary tree.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
