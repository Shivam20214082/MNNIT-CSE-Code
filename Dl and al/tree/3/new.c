// Shivam kumar gupta
// CSE-D
// 20214082
#include <stdlib.h>
#include <stdio.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *inorder(struct tree *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct tree *create(int x)
{
    struct tree *root = (struct tree *)malloc(sizeof(struct tree));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void insert(struct tree *root, int x)
{
    // printf("hii\n");
    struct tree *prev = root;

    while (root != NULL)
    {
        prev = root;
        if (root->data > x)
        {
            root = root->left;
        }
        else if (root->data < x)
        {
            root = root->right;
        }
        else
        {
            printf("you can't enter data beacause data is already present\n");
            break;
        }
    }

    struct tree *new = create(x);
    if (prev->data > x)
    {
        prev->left = new;
    }
    else if (prev->data < x)
    {
        prev->right = new;
    }
}

struct tree *delete(struct tree *root, int x)
{
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }

    if(root->data>x){
        root->left=delete(root->left,x);
    }
    else if(root->data<x){
        root->right=delete(root->left,x);
    }
    else{
        if(root->left==NULL){
            struct  tree *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct  tree *temp=root->left;
            free(root);
            return temp;
        }
        else{
            struct tree* ipr=inorder(root);
            root->data=ipr->data;
            delete(root->left,ipr->data);
        }

    }
    return root;
}

void search(struct tree *root, int x)
{
    struct tree *p = root;
    while (p != NULL)
    {
        if (p->data > x)
        {
            p = p->left;
        }
        else if (p->data < x)
            p = p->right;
        else
        {
            printf("Data is found\n");
            break;
        }
    }
    if (p == NULL)
    {
        printf("Data is not found\n");
    }
}

void display(struct tree *root)
{
    struct tree *p = root;
    if (p != NULL)
    {
        display(p->left);
        printf("%d ", p->data);
        display(p->right);
    }
}
int main()
{
    struct tree *root = create(8);
    insert(root, 2);
    // insert(root,2);
    insert(root, 9);
    insert(root, 4);
    insert(root, 3);
    printf("Data in tree are :: ");
    display(root);
    printf("\n");
    delete (root, 2);
    display(root);
    printf("\n");
}

/*
Data in tree are :: 2 3 4 8 9
3 4 8 9
*/