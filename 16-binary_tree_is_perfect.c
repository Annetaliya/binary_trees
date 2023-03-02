#include "binary_trees.h"

/**
* binary_tree_size - function that mesures the size of abinary tree
* @tree: pointer to root node of the tree to measure the height
* Return: size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if  (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
* binary_tree_height - function that mesures the height of abinary tree
* @tree: pointer to root node of the tree to measure the height
*
* Return: 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

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
* binary_tree_is_perfect - function that checks if abinary tree is perfect
* @tree: pointer to root node of the tree to check
* Return:full or not full
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height;
	if (tree == NULL)
	{
		return (0);
	}
	size  = binary_tree_size(tree);
	height = binary_tree_height(tree);
	return ((1 << height) - 1 == size);
}
