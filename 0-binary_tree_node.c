#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *another_node;

	another_node = malloc(sizeof(binary_tree_t));
	if (another_node == NULL)
		return (NULL);
	another_node->parent = parent;
	another_node->n = value;
	another_node->left = another_node->right = NULL;
	return (another_node);
}
