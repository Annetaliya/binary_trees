#include "binary_trees.h"

/**
 *binary_tree_insert_right - function that inserts a node to the right
 *@parent: is a pointer to the node to insert the right-child in
 *@value: value to store the new node
 *Return: a pointer to the created node or NULL on failure
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	}
	else
	{
		old_node = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = old_node;
		old_node->parent = parent->right;
	}
	return (parent->right);

}
