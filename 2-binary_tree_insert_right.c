#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a new node as right of the parent node
 * If right child already exist, insert it as right of new node.
 * @parent: pointer to parent of the new node
 * @value: integer data of the new node
 * Return: pointer to newly created node or NULL if there's failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = right_child;
	else
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
		parent->right = right_child;
	}
	return (right_child);
}
