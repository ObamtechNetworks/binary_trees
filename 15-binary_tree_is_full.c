#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root noe of the tree to measure
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*base case*/
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right != NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
