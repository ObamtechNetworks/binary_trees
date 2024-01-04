#include "binary_trees.h"
/**
 * max - returns the maximum between two values
 * @a: the first param
 * @b: the second param
 * Return: maximum
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root noe of the tree to measure
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/*create variables to accum left and right recursive call of the subtrees*/
	size_t left_height = 0, right_height = 0;

	/*base case*/
	if (tree == NULL)
		return (0);

	if (tree->left) /*if exists*/
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 0;
	if (tree->right) /*if exists*/
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 0;

	return (max(left_height, right_height));
}
