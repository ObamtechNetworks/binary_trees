#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find sibling
 * Return: pointer to the sibling node, NULL if node is NULL
 * OR PARENT IS NULL
 * NULL if node has no SIBLING
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*base case*/
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
	{
		return (node->parent->right); /*sibling is the right child*/
	}
	else
		return (node->parent->left); /*sibling is left child*/
}
