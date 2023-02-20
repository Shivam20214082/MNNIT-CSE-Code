#include<stdio.h>
#include<string.h>
struct book{
    char name[20];
    char aname[20];
    int price;
    int pyear;
};
void setdata(struct book *b){
    int a;
    printf("\n\nEnter the Book name :: ");
    scanf("%s",b->name);
    printf("Enter the Book Author name ::");
    scanf("%s",b->aname);
    printf("Enter the Book price :: ");
    scanf("%d",&a);
    b->price=a;
    printf("Enter the publication year :: ");
    scanf("%d",&a);
    b->pyear=a;
}
void getdata(struct book *b){
    printf("\nBook name :: ");
    puts(b->name);
    printf("Author name :: ");
    puts(b->aname);
    printf("Price :: %d\n",b->price);
    printf("Publication year :: %d\n",b->pyear);
}
int main(){
    struct book b1,b2;
    setdata(&b1);
    setdata(&b2);
    getdata(&b1);
    getdata(&b2);
}
//Output
/*
Enter the Book name :: A
Enter the Book Author name ::X
Enter the Book price :: 200
Enter the publication year :: 2021


Enter the Book name :: B
Enter the Book Author name ::Y
Enter the Book price :: 300
Enter the publication year :: 2022

Book name :: A
Author name :: X
Price :: 200
Publication year :: 2021

Book name :: B
Author name :: Y
Price :: 300
Publication year :: 2022
*/