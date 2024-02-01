#include "binary_trees.h"

/**
 * binary_tree_is_root - function that check if a given node is a root.
 * @node: pointer to the node.
 * Return: 1 if node is a root, 0 otherwise.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node)->parent)
		return (1);
	else
		return (0);
}
