#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

void ft_mult(void *item, int current_level, int is_first_elem)
{
    *(int *)item = *(int *)item * 5;
}
void btree_apply_by_level(t_btree *root, void(*applyf)(void *item, int current_level, int is_first_elem))
{
    int level = 0;
    int elem = 1;

    if(!root)
    {
        level--;
        return;    
    }
    applyf(root->item, level, elem);
    level++;
    btree_apply_by_level(root->left, applyf);
    if(root->left)
        elem = 0;
    level++;
    btree_apply_by_level(root->right, applyf);
    level--;
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

int ft_cmp(void *data, void *data1)
{
    return(*(int *)data - *(int *)data1);
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
    btree_apply_by_level(root, ft_mult);
    printbtree(root, 0);
    freebtree(root);
}
