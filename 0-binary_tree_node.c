#include "binary_trees.h"

/**
 * binary_tree_node - function creates a binary tree node
 * @parent: pointer to parent node
 * @value: integer data value of the node
 *
 * Return: pointer to the newly created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node)
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		return (new_node);
	}
	return (NULL);
}



