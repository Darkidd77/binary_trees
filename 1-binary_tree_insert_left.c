#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as left-child of
 *                            another in a binary tree.
 * @parent: A pointer to node to insert  left-child in.
 * @value: value store in new node.
 *
 * Return: If parent  NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ne;

	if (parent == NULL)
		return (NULL);

	ne = binary_tree_node(parent, value);
	if (ne == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		ne->left = parent->left;
		parent->left->parent = ne;
	}
	parent->left = ne;

	return (ne);
}
