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
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: is a pointer to the root node.
 * Return: If tree is NULL, return 0.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left);
		
	if (tree->right)
		right = binary_tree_height(tree->right);

	if (left != right)
		return (0);

	if (!binary_tree_is_perfect(tree->left) || !binary_tree_is_perfect(tree->right))
		return (0);

	return(1);
}
