#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree oterwise 0
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_left = binary_tree_height(tree->left) + 1;
	else
		height_left = 0;

	if (tree->right)
		height_right = binary_tree_height(tree->right) + 1;
	else
		height_right = 0;

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
