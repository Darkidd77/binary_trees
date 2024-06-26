#include "binary_trees.h"

/**
 * binary_tree_size - Measures size of binary tree.
 * @tree: A pointer to root node of  tree to measure the size of.
 *
 * Return: size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}
	return (s);
}
