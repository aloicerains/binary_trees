#include "binary_trees.h"

/**
 * binary_tree_balance - function measures the balance factor of a tree
 * @tree: pointer to the root of the node of tree to measure balance
 *
 * Return: balance factor, or 0 on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lef_t, righ_t;

	if (tree == NULL)
		return (-1);
	lef_t = binary_tree_balance(tree->left);
	righ_t = binary_tree_balance(tree->right);
	return (lef_t  - righ_t);
}

