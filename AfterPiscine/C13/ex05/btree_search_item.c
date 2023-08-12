#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
    void *elem;

    if(root)
    {
        elem = btree_search_item(root->left, data_ref, cmpf);
        if(elem)
            return(elem);
        if(cmpf(data_ref, root->item) == 0)
            return(root->item);
        elem = btree_search_item(root->right, data_ref, cmpf);
        if(elem)
            return(elem);
    }
    return(NULL);
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

int ft_cmp(void *data1, void *data2)
{
    return(*(int *)data1 - *(int *)data2);
}

void btree_insert_data(t_btree **root, void *item, int(*cmpf)(void *, void *))
{
    t_btree *new;

    if((*root) == NULL)
        *root = btree_create_node(item);
    new = (*root);
    if(cmpf((*root)->item, item) > 0)
    {
        if(new->left)
            btree_insert_data(&new->left, item, cmpf);
        else
            new->left = btree_create_node(item);
    }
    else
    {
        if(new->right)
            btree_insert_data(&new->right, item, cmpf);
        else
            new->right = btree_create_node(item);
    }
}

void freebtree(t_btree *root)
{
    if(root->left)
        freebtree(root->left);
    if(root->right)
        freebtree(root->right);
    free(root);
}

int main()
{
    t_btree *root;
    int a = 5;
    int b = 6;
    int c = 4;
    int e = 1;
    int f = 3;
    int g = 8;
    int h = 9;
    int level = 0;
    void *p = &a;
    void *p1 = &c;
    void *elem1;

    root = btree_create_node(p);
    btree_insert_data(&root, (void *)&f, ft_cmp);
    btree_insert_data(&root, (void *)&c, ft_cmp);
    btree_insert_data(&root, (void *)&e, ft_cmp);
    btree_insert_data(&root, (void *)&g, ft_cmp);
    btree_insert_data(&root, (void *)&h, ft_cmp);
    btree_insert_data(&root, (void *)&b, ft_cmp);
    elem1 = btree_search_item(root, p1, ft_cmp);
    printf("%d", *(int *)elem1);
}
