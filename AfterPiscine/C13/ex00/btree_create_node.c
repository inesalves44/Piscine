#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

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

void print_tree(t_btree *root)
{
    if(!root)
        printf("no tree");
    printf("%d\n", *(int *)root->item);
    printf("--left-- ");
    if(root->left)
        print_tree(root->left);
    printf("--right--\n");
    if(root->right)
        print_tree(root->right);
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
    t_btree *root;
    int b = 5;
    void *c;

    c = &b;
    root = btree_create_node(c);
    print_tree(root);
    free_tree(root);
}
