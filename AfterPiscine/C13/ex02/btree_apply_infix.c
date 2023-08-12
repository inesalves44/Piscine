#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
    if(root->left)
        btree_apply_infix(root->left, applyf);
    applyf(root->item);
    if(root->right)
        btree_apply_infix(root->right, applyf);
}

void print_tree(void *data)
{
    printf("%d\n", *(int *) data);
}

void free_tree(t_btree *root)
{
    if(root->left)
        free_tree(root->left);
    if(root->right)
        free_tree(root->right);
    free(root);
}

int main()
{
    int a = 5, b = 4, c = 6;
    t_btree *root = btree_create_node(&a);
    t_btree *left = btree_create_node(&b);
    t_btree *right = btree_create_node(&c);

    root->left = left;
    root->right = right;
    btree_apply_infix(root, &print_tree);
    free_tree(root);
}
