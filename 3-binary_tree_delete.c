#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: nothing if tree is NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*if tree is NULL return silently without doing anything*/
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
