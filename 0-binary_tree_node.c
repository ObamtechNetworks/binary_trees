#include "binary_trees.h"
/**
 * binary_tree_node - the binary tree node to create
 * @parent: the pointer to the parent node
 * @value: the value of the new node
 * Return: a pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*create the new node*/
	binary_tree_t *tree_node;

	/*allocate memory for the new node*/
	tree_node = malloc(sizeof(binary_tree_t));
	/*check malloc failure*/
	if (tree_node != NULL)
	{
		/*set values*/
		tree_node->parent = parent; /*set parent node*/
		tree_node->left = NULL;
		tree_node->right = NULL;
		tree_node->n = value;
	}
	else
	{
		return (NULL);
	}

	/*return pointer to the new node*/
	return (tree_node);
}
