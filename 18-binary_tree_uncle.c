#include "binary_trees.h"

/**
* binary_tree_uncle - function that finds uncle of a node
* @node:pointer to the node to find the uncle
*
* Return:pointer touncle  node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (node == NULL || parent == NULL || grandparent == NULL)
	{
		return (NULL);
	}
	if (grandparent->left == parent)
	{
		return (grandparent->right);
	}

	else
	{
		return (grandparent->left);
	}
}
