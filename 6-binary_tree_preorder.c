#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses a binary tree using pre-order method
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call each node
 * Return: none
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*check if root node is NULL*/
	if (tree == NULL || func == NULL)
		return;
	/*CALL FUN ON THE VALUE OF THE CURRENT NODE*/
	(*func)(tree->n);

	/*recursively call binary_tree func on the left child*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
