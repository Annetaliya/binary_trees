#include "binary_trees.h"

/**
* binary_tree_height - function that mesures the height of abinary tree
* @tree: pointer to root node of the tree to measure the height
*
* Return: 0
*/
int binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}

}

/**
* binary_tree_balance - function that measures balance
* factor of a binary tree
* @tree: pointer to root node of the tree to measures the balance factor
* Return:balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return §(0);
	}
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));


}
