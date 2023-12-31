#include "binary_trees.h"

/**
 * binary_tree_size - this measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: depth of a node in a binary tree. If tree is NULL,
 * the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
	}
}
