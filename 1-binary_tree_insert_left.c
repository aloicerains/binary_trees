#include "binary_trees.h"

/**
 * binary_tree_insert_left - function inserts node as the left-child
 * @parent: pointer to the node to insert the left-child
 * @value: data value to be stored in the left node
 *
 * Return: pointer to the created node or null on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	tmp = parent->left;
	if (tmp)
	{
		parent->left = new_node;
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	else
		parent->left = new_node;
	return (new_node);
}


