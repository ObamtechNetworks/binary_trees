#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another noe
 * @parent: pointer to the node to insert the left-child
 * @value: the value to store in the new node
 * Return: a pter to the created node, or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node must ake its place
 * and the old left-child must be set as the left-child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*Create new node*/
	binary_tree_t *new_node, *left_child;

	/*edge cases*/
	if (parent == NULL)
		return (NULL);

	/*allocate memory for the new node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/*set the parent node of the new node to be ptr to parent*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/*if left part of parent is not NULL, set the new node to be the left*/
	if (parent->left != NULL)
	{
		/*store parent-left somewhere*/
		left_child = parent->left;
		/*set old left child as left child of new node*/
		new_node->left = left_child;
		/*update parent of the old left child*/
		left_child->parent = new_node;
	}
	/*set new node as left part of paretn*/
	parent->left = new_node;

	/*return pointer to the new node*/
	return (new_node);
}
