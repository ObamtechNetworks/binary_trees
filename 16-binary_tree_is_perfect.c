#include "binary_trees.h"
#include <math.h>
/**
 * power - calcuate the power of a value raise to another
 * @base: the base number
 * @exp: the value to raise to
 * Return: result of exponentiation
 */
double power(double base, int exp)
{
	int i = 0;
	double result = 1.0;

	if (exp < 0)
	{
		/*handle neg exp, invert base and make exp posititve*/
		base = 1.0 / base;
		exp = -exp;
	}

	for (i = 0; i < exp; ++i)
	{
		result *= base;
	}

	return (result);
}
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
/**
 * count_nodes - count no of nodes in a binary tree
 * @tree: - ptr to the root nodes
 * Return: total node count
 */
int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root noe of the tree to measure
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/*varaible for height and number of nodes*/
	int height, total_nodes, expected_nodes;

	height = binary_tree_height(tree); /*cacl height*/
	total_nodes = count_nodes(tree);
	expected_nodes = power(2, height + 1) - 1;/*calc no. of nodes*/

	return (total_nodes == expected_nodes);
}
