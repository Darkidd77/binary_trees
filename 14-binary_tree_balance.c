#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of  binary tree.
 * @tree: A pointer to the root node of the tree to measure height.
 *
 * Return: If tree NULL, your function must return 0, else return the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t le = 0, re = 0;

		le = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		re = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((le > re) ? le : re);
	}
	return (0);
}
