#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a
 * node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new nod
 * Return: Returns pointer to the created nod
 * or NULL on failur or if parents is NULL
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	new_node->left = parent->left;

	if (new_node->left)
		new_node->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
