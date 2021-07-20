#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect or 0
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (sub_height(tree->left) != sub_height(tree->right))
		return (0);
	l = binary_tree_is_perfect(tree->left);
	r = binary_tree_is_perfect(tree->right);

	return (l && r);
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
