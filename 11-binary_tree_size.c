#include "binary_trees.h"

/**
* binary_tree_size - function that mesures the depth of abinary tree
* @tree: pointer to root node of the tree to measure the height
* Return: depth
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if  (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
