#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root noe of the tree to measure
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t root_depth = 0;

	/*base case*/
	if (tree == NULL)
		return (0);

	if (tree->parent)
		root_depth = 1 + binary_tree_depth(tree->parent);
	else
		return (0);

	return (root_depth);
}
