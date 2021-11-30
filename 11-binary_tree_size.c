#include "binary_trees.h"
/**
 * binary_tree_size - function measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure size
 *
 * Return: size otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lef_t, righ_t;

	if (tree == NULL)
		return (0);
	lef_t = binary_tree_size(tree->left);
	righ_t = binary_tree_size(tree->right);
	return (lef_t + 1 + righ_t);
}
