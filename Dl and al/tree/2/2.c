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
    int height;
};
int getHeight(struct tree *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}
int getBalanceFactor(struct tree *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
struct tree *inorder(struct tree *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct tree *minValueNode(struct tree *node)
{
    struct tree* current = node;

    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;

    return current;
}

struct tree *create(int x)
{
    struct tree *root = (struct tree *)malloc(sizeof(struct tree));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    root->height = 1;
    return root;
}
struct tree *lr(struct tree *y)
{
    struct tree *n1 = y->left;
    struct tree *n2 = y->left->right;
    n1->right = y;
    y->left = n2;
    n1->height = 1 + max(getHeight(n1->left), getHeight(n1->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    return n1;
}
struct tree *rr(struct tree *x)
{
    struct tree *n1 = x->right;
    struct tree *n2 = x->right->left;
    n1->left = x;
    x->right = n2;
    n1->height = 1 + max(getHeight(n1->left), getHeight(n1->right));
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    return n1;
}
struct tree *insert(struct tree *root, int x)
{
    if (root == NULL)
        return create(x);

    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    int f = getBalanceFactor(root);

    // Left Left Case
    if (f > 1 && x < root->left->data)
    {
        return lr(root);
    }
    // Right Right Case
    if (f < -1 && x > root->right->data)
    {
        return rr(root);
    }
    // Left Right Case
    if (f > 1 && x > root->left->data)
    {
        root->left = rr(root->left);
        return lr(root);
    }
    // Right Left Case
    if (f < -1 && x < root->right->data)
    {
        root->right = lr(root->right);
        return rr(root);
    }
    return root;
}

struct tree *delete (struct tree *root, int x)
{
    if (root == NULL)
    {
        return root;
    }
    if (x < root->data)
    {
        root->left = delete (root->left, x);
    }
    else if (x > root->data)
    {
        root->right = delete (root->right, x);
    }
    else
    {
        if (root->left == NULL || root->right == NULL)
        {
            struct tree *temp = root->left ? root->left : root->right;

            // No child case
            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else // One child case
                *root = *temp;
            free(temp);
        }
        else
        {
            struct tree *temp = minValueNode(root->right);

            root->data = temp->data;

            // Delete the inorder successor
            root->right = delete (root->right, temp->data);
        }
    }
    if (root == NULL)
    return root;
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    int f = getBalanceFactor(root);

    // Left Left Case
    if (f > 1 && getBalanceFactor(root->left) >= 0)
    {
        return lr(root);
    }
    // Right Right Case
    if (f < -1 && getBalanceFactor(root->right) <= 0)
    {
        return rr(root);
    }
    // Left Right Case
    if (f > 1 && getBalanceFactor(root->left) < 0)
    {
        root->left = rr(root->left);
        return lr(root);
    }
    // Right Left Case
    if (f < -1 && getBalanceFactor(root->right) > 0)
    {
        root->right = lr(root->right);
        return rr(root);
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
void preorder(struct tree *root)
{

    struct tree *p = root;
    if (p != NULL)
    {
        printf("%d ", p->data);
        preorder(p->left);
        preorder(p->right);
    }
}
int main()
{
    struct tree *root = create(8);
    root = insert(root, 2);
    // insert(root,2);
    root = insert(root, 9);
    root = insert(root, 4);
    root = insert(root, 3);
    printf("Data in tree are :: ");
    display(root);
    printf("\nData in tree in preorder are :: ");
    preorder(root);
    printf("\n");
    root =delete (root, 8);
    display(root);
    printf("\n");
    search(root, 10);
}

/*
Data in tree are :: 2 3 4 8 9 
Data in tree in preorder are :: 8 3 2 4 9
2 3 4 9
Data is not found
*/