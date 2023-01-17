#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right_child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->right = parent->right;

	if (parent->right)
		new_node->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
