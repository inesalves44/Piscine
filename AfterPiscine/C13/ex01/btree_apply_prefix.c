#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
    applyf(root->item);
    if(root->left)
        btree_apply_prefix(root->left, applyf);
    if(root->right)
        btree_apply_prefix(root->right, applyf);
}

t_btree *btree_create_node(void *item)
{
    t_btree *root;

    root = malloc(sizeof(t_btree));
    if(!(root))
        return NULL;
    root->item = item;
    root->left = NULL;
    root->right = NULL;
    return(root);
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
    btree_apply_prefix(root, &print_tree);
    free_tree(root);
}
