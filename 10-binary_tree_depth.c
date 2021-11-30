#include "binary_trees.h"

/**
 * binary_tree_depth - function measures the depth of a binary tree
 * @tree: pointer to the node to measure depth from
 *
 * Return: depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}

