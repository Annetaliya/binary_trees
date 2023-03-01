#include "binary_trees.h"

/**
* binary_tree_depth - function that mesures the depth of abinary tree
* @tree: pointer to root node of the tree to measure the height
* Return:depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if  (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
