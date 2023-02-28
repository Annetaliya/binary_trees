#include "binary_trees.h"

/**
* binary_tree_delete - function to delete an entire binary tree
* @tree: pointer tpo the root node
*Return: 0
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);	
	free(tree);
}

