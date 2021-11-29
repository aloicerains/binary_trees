#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: data value to be stored in the right node
 *
 * Return: pointer to the created node or null on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	tmp = parent->right;
	if (tmp)
	{
		parent->right = new_node;
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}


