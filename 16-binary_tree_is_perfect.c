#include "binary_trees.h"

/**
 * binary_tree_height - Height of the binary tree.
 * @tree: Is a pointer to the root node
 * Return: Return the height of a binary tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

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
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: is a pointer to the root node.
 * Return: If tree is NULL, return 0.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect = 0, right_perfect = 0;
	int left_height = 0, right_height = 0;
	
	if (!tree)
		return (1);

	if (binary_tree_balance(tree) != 0)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if ( left_height!= right_height)
		return (0);

	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	if (!left_perfect || !right_perfect)
		return (0);

	return (1);
}
