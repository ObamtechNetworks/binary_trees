#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: number of leaeves, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*edge case*/
	if (tree == NULL)
		return (0);

	/*count the leaves*/
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + (binary_tree_nodes(tree->left) +
					binary_tree_nodes(tree->right)));
	}

	return (0);
}
