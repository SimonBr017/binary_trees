#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a
 * node as the right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new nod
 * Return: Returns pointer to the created nod
 * or NULL on failur or if parents is NULL
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (parent == NULL)
		return (NULL);
	new_node_right = binary_tree_node(parent, value);

	if (new_node_right == NULL)
		return (NULL);

	new_node_right->right = parent->right;

	if (new_node_right->right)
		new_node_right->right->parent = new_node_right;

	parent->right = new_node_right;

	return (new_node_right);
}
