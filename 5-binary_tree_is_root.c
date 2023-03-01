#include "binary_trees.h"

/**
 *binary_tree_is_root - function that checks if a given
 *@node: pointer to the node to check
 *
 *Return: 1 if node is aroot, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->parent)
		return (1);
	return (0);
}
