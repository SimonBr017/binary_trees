#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of tree
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_left = sub_height(tree->left);
	else
		height_left = -1;

	if (tree->right)
		height_right = sub_height(tree->right);
	else
		height_right = -1;

	return (height_left - height_right);
}

/**
 * sub_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree oterwise 0
 **/

int sub_height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + sub_height(tree->left) : 0;
	height_r = tree->right ? 1 + sub_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
