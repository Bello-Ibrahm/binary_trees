#include "binary_trees.h"

/**
 * count_nodes - count the nodes in a tree
 * @tree: pointer to the root node to count
 * Return: number of node
 *	0 if NULL
 */
int count_nodes(const binary_tree_t *tree)
{
	int left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = count_nodes(tree->left);
	right_count = count_nodes(tree->right);

	/* Add 1 for the current node */
	return (1 + left_count + right_count);
}

/**
 * height - function to calculate the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the binary tree
 */
int height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - function to check if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, perfect_nodes, actual_nodes = 0;

	if (tree == NULL)
		return (0);  /* NULL tree is not perfect */

	h = height(tree);

	/* Calculate the number of nodes in the perfect binary tree with height h */
	perfect_nodes = (1 << h) - 1;
	actual_nodes = count_nodes(tree);

	return (actual_nodes == perfect_nodes);
}
