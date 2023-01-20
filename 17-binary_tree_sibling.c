#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Is a pointer to the node to find the sibling.
 * Return: Return a pointer to the sibling node.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	else if (!node->parent)
		return (NULL);

	else if (node->parent->left != node)
		return (node->parent->left);

	else
		return (node->parent->right);
}
