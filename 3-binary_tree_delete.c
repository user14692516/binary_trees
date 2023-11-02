#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: a pointer to the root of the tree to uproot. see wht i did there
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
