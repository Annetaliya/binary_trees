#include "binary_trees.h"

/**
* binary_tree_is_perfect - function tat checks if abinary tree is perfect
* @tree: pointer to root node of the tree to check
* Return:full or not full
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (+ 1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

}
