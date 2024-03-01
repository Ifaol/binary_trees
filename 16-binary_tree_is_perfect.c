#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 *
 *Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int left = 1, right = 1;
if (tree != NULL)
{
if (tree->right)
right = right + binary_tree_height(tree->right);
if (tree->left)
left = left + binary_tree_height(tree->left);
if (left > right)
{
return (left);
}
else
{
return (right);
}
}
else
{
return (0);
}
}
/**
 *binary_tree_size - measures the size of a binary tree.
 *@tree: pointer to the root node of the tree to measure the size.
 *
 *Return: if tree is NULL, must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t n_left, n_right;
if (tree == NULL)
{
return (0);
}
n_left = binary_tree_size(tree->left);
n_right = binary_tree_size(tree->right);
return (1 + n_left + n_right);
}
/**
 *binary_tree_is_perfect - checks if a binary tree is perfect.
 *@tree: pointer to the root node of the tree to check.
 *
 *Return: if tree is NULL, function must return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t h = 0, perfect_size = 0;
if (tree == NULL)
{
return (0);
}
h = binary_tree_height(tree);
perfect_size = (1 << (h + 1)) - 1;
if (perfect_size == binary_tree_size(tree))
{
return (1);
}
else
{
return (0);
}
}
