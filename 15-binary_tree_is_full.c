#include "binary_trees.h"

/**
 * binary_tree_is_full - function checks if binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: returns 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag1;
	int flag2;

	if (tree == NULL)
		return (0);
	flag1 = binary_full_check(tree->left);
	flag2 = binary_full_check(tree->right);
	if (flag1 < 0 || flag2 < 0)
		return (0);
	else
		return (1);

}
/**
 * binary_full_check - function checks if tree is full
 * @tree: pointer to the root node
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_full_check(const binary_tree_t *tree)
{
	int c = 1;
	int c1 = 1;

	if (tree == NULL)
		return (-1);
	if ((tree->left && !tree->right) || (tree->right && !tree->left))
		return (-1);
	else
		return (1);
	c *= binary_full_check(tree->left);
	c1 *= binary_full_check(tree->right);
}
