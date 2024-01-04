#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another one
 * @parent: pointer to the node to insert the left-child
 * @value: the value to store in the new node
 * Return: a pter to the created node, or NULL on failure or if parent is NULL
 * If parent already has a right-child, the new node must take its place
 * and the old right-child must be set as the right-child of the new node
 * also the parent of the old right-child too must be updated as the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*Create new node*/
	binary_tree_t *new_node, *right_child;

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

	/*if right part of parent is not NULL, set the new node to be the right*/
	if (parent->right != NULL)
	{
		/*store parent-left somewhere*/
		right_child = parent->right;
		/*set old right child as right child of new node*/
		new_node->right = right_child;
		/*update parent of the old left child*/
		right_child->parent = new_node;
	}
	/*set new node as left part of paretn*/
	parent->right = new_node;

	/*return pointer to the new node*/
	return (new_node);
}
