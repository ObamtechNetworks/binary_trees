#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a binary tree using postorder method
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call each node
 * Return: none
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*check if root node is NULL*/
	if (tree == NULL || func == NULL)
		return;
	/*recursively call binary_tree_postorder func on the left child*/
	binary_tree_postorder(tree->left, func);
	/*recursive call binary_tree_postorder on the right child*/
	binary_tree_postorder(tree->right, func);
	/*CALL FUNC ON THE VALUE OF THE CURRENT NODE*/
	(*func)(tree->n);
}
