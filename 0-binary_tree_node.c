#include "binary_trees.h"

/**
 *binary_tree_node - function that creates a binary tree
 *@parent:a pointer to the parent node of the node to create
 *@value:int value to be added in the node
 *Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = value;
	temp->parent = parent;
	temp->right = NULL;
	temp->left = NULL;

	return (temp);

}
