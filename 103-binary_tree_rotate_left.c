#include "binary_trees.h"
/**
 * binary_tree_rotate_left - function that performs
 * a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: function must return a pointer to
 * the new root node of the tree once rotated
 **/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *parent, *child_right;

	if (tree == NULL)
		return (NULL);

	parent = tree->parent;
	child_right = tree->right;
	tree->right = child_right->left;

	child_right->left = tree;
	tree->parent = child_right;
	child_right->parent = parent = NULL;


	return (child_right);
}
