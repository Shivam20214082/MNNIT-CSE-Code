#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree* create(int x){
    struct tree* root=(struct tree*)malloc(sizeof(struct tree));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}

void insert(struct tree* root,int x){
    struct tree* prev=root;
    struct tree* p=root;
    while(p!=NULL){
        prev=p;
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
    if(p==NULL){
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

void inorder(struct tree *root)
{
    
    struct tree *p = root;
    if (p != NULL)
    {
        inorder(p->left);
        printf("%d ", p->data);
        inorder(p->right);
    }
}
void postorder(struct tree *root)
{
    
    struct tree *p = root;
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d ", p->data);
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
    insert(root, 2);
    // insert(root,2);
    insert(root, 9);
    insert(root, 4);
    insert(root, 3);
    insert(root, 5);
    printf("\n\nInorder data :: ");
    inorder(root);
    printf("\n\npreorder data :: ");
    preorder(root);
    printf("\n\nPostorder data :: ");
    postorder(root);
    printf("\n");
}

//output
/*

Inorder data :: 2 3 4 5 8 9 

preorder data :: 8 2 4 3 5 9 

Postorder data :: 3 5 4 2 9 8
*/