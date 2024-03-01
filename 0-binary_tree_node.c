#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 *
 * This function creates a new binary tree node with the specified value
 * and parent node. The new node will not have any child nodes initially.
 *
 * Return: If memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node = NULL;
  new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL)
    {
      return (NULL);
    }
  new_node->n = value;
  new_node->parent = parent;
  new_node->left = NULL;
  new_node->right = NULL;
  return (new_node);
}
