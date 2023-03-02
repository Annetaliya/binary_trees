#include "binary_trees.h"

/**
* binary_tree_balance - function that measures balance
* factor of a binary tree
* @tree: pointer to root node of the tree to measures the balance factor
* Return:balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
