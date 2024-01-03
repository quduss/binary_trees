#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a new node as left of the parent node
 * If left child already exist, insert it as left of the new node.
 * @parent: pointer to parent of the new node
 * @value: integer data of the new node
 * Return: pointer to newly created node or NULL if there's failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);
	if (parent->left == NULL)
		parent->left = left_child;
	else
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
		parent->left = left_child;
	}
	return (left_child);
}
