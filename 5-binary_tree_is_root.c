#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node to check
 *
 * Return:
 *	1 if node is a root
 *	0 if node is not a root
 *	0 if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int is_root;

	is_root = (!node || node->parent) ? 0 : 1;

	return (is_root);
}
