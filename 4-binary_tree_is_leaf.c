#include "binary_trees.h"

/**
 *binary_tree_is_leaf - function that checks if a tree is a leaf
 *@node: a pointer to the node to check
 *Return: 1 if node is a leaf otherwise 0
 *if node is NULL return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);

}
