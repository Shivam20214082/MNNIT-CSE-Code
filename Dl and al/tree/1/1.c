//Shivam kumar gupta
//CSE-D
//20214082
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
    struct tree *p = root;
    struct tree *prev = root;
    while (p != NULL)
    {
        prev = p;
        if (p->data > x)
        {
            p = p->left;
        }
        else if (p->data < x)
        {
            p = p->right;
        }
        else
        {
            printf("Data is already present\n");
            break;
        }
    }
    if (p == NULL)
    {
        struct tree *new = (struct tree *)malloc(sizeof(struct tree));
        new->data = x;
        new->left = NULL;
        new->right = NULL;
        if (prev->data > x)
        {
            prev->left = new;
        }
        else if (prev->data < x)
        {
            prev->right = new;
        }
    }
}

struct tree *delete (struct tree *root, int x)
{
    struct tree *p = root;
    if (p == NULL)
    {
        return NULL;
    }
    if (p->left == NULL && p->right == NULL)
    {
        free(p);
        return NULL;
    }
    if (p->data > x)
    {
        p->left = delete (p->left, x);
        ;
    }
    else if (p->data < x)
    {
        p->right = delete (p->right, x);
    }
    else
    {
        if (p->left == NULL)
        {
            struct tree *temp = p->right;
            free(p);
            return temp;
        }
        else if (p->right == NULL)
        {
            struct tree *temp = p->left;
            free(p);
            return temp;
        }
        else
        {
            struct tree *q = inorder(p);
            p->data = q->data;
            p->left = delete (p->left, q->data);
        }
    }
    return p;
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