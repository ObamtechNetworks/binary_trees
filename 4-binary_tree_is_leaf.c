#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: returns 1 if node is a leaf, 0 if not a leave
 * if node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*check if node is NULL*/
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);/*it is a leaf node*/

	/*else return 0*/
	return (0);
}
