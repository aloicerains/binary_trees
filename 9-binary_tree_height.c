#include "binary_trees.h"

/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree: pointer to the root node of the tree to be measured
 *
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lef_t, righ_t;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	lef_t = binary_tree_height(tree->left);
	righ_t = binary_tree_height(tree->right);
	if (lef_t > righ_t)
		return (lef_t + 1);
	else
		return (righ_t + 1);
}

