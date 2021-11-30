#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function checks if node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if leaf, 0 therwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left)
			return (0);
		else if (node->right)
			return (0);
	}
	if (!node)
		return (0);
	return (1);
}
