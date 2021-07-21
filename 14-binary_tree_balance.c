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

	height_left = tree->left ? (int)sub0_height(tree->left) : -1;
	height_right = tree->right ? (int)sub0_height(tree->right) : -1;

	return (height_left - height_right);
}

/**
 * sub_height - Measures the height of a binary tree
 * @tree: tree
 * Return: the height of a tree
 */

size_t sub0_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + sub0_height(tree->left) : 0;
	height_r = tree->right ? 1 + sub0_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
