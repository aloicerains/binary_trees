#include "binary_trees.h"
#include "15-binary_tree_is_full.c"

/**
 * height_check - function finds the height of the tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
int height_check(const binary_tree_t *tree)
{
	int lef_t, righ_t;

	if (tree == NULL)
		return (-1);
	lef_t = height_check(tree->left);
	righ_t = height_check(tree->right);
	if (lef_t > righ_t)
		return (lef_t + 1);
	else
		return (righ_t + 1);
}
/**
 * binary_tree_is_perfect - function checks if the binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full_check, lh_check, rh_check;

	if (tree == NULL)
		return (0);
	full_check = binary_tree_is_full(tree);
	lh_check = height_check(tree->left);
	rh_check = height_check(tree->right);
	if (lh_check == rh_check && full_check == 1)
		return (1);
	else
		return (0);
}
