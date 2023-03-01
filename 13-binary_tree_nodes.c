#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts thenodes with
* 1 child in abinary tree
* @tree: pointer to root node of the tree to measure the number of nodes
* Return:count
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if  (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		count++;
	}
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}