#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node
 * Return: If node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

<<<<<<< HEAD
for (depth = 0; node && node->parent; bepth++)
	node = node->parent;
return (depth);
=======
	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
>>>>>>> ee0b95600926375c3da97d83623e6f342186dcaa
}
