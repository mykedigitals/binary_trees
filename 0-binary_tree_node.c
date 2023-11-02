#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a node for binaryTree.
 * @parent: Pointer to the initial of the node to create.
 * @value: This reps the value to put in the node created.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
