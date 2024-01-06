#include "binary_trees.h"
/**
 * tree_height - calculates height of a tree starting from 1 when counting
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
		return (0);
	left_depth = tree_height(tree->left);
	right_depth = tree_height(tree->right);

	if (left_depth > right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	height = tree_height(tree);
	if (height == 0)
		return (0);
	return (height - 1);
}
