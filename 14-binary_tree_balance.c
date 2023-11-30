#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *	to measure the hight.
 *
 * Return: If tree is NULL, functin must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 *	factor.
 * Return:
 *	balanced factor
 *	If tree is NULL, 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
