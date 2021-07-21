#include "binary_trees.h"
/**
 * binary_tree_rotate_right - function that performs
 * a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: function must return a pointer to
 * the new root node of the tree once rotated
 **/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *parent, *child_left;

	if (tree == NULL)
		return (NULL);

	parent = tree->parent;
	child_left = tree->left;
	tree->left = child_left->right;

	child_left->right = tree;

	tree->parent = child_left;
	child_left->parent = parent = NULL;
	if (tree->left)
		tree->left->parent = tree;

	return (child_left);
}
