#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

int btree_level_count(t_btree *root)
{
    int countl;
    int countr;

    if(root)
    {
        countl = btree_level_count(root->left);
        countr = btree_level_count(root->right);
        if(countr > countl)
            return(countr + 1);
        else
            return(countl + 1);
    }
    return(0);
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

void	printbtree(t_btree *root, int level)
{
    int l_left;
    int l_right;

    if(root == NULL)
        printf("no tree");
    printf("level: %d->", level);
    printf("%d\n", *(int *)root->item);
    if(root->left)
    {
        l_left = level + 1;
        printbtree(root->left, l_left);
    }
    if(root->right)
    {
        l_right = level + 1;
        printbtree(root->right, l_right);
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
    int i = 2;
    int level = 0;
    void *p = &a;
    int level2;

    root = btree_create_node(p);
    btree_insert_data(&root, (void *)&f, ft_cmp);
    btree_insert_data(&root, (void *)&g, ft_cmp);
    btree_insert_data(&root, (void *)&h, ft_cmp);
    btree_insert_data(&root, (void *)&b, ft_cmp);
    btree_insert_data(&root, (void *)&c, ft_cmp);
    btree_insert_data(&root, (void *)&i, ft_cmp);
    btree_insert_data(&root, (void *)&e, ft_cmp);
    printbtree(root, level);
    level2 = btree_level_count(root);
    printf("the largest branch has %d branches", level2);
}
