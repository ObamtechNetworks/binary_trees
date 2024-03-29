#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a given node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root, 0 if not a root
 * if node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/*check if noe is NULL, return 0*/
	if (node == NULL)
		return (0);

	/*check if node has a parent, if true, it's not root*/
	if (node->parent != NULL)
		return (0);

	/*else it is a parent node*/
	return (1);
}
