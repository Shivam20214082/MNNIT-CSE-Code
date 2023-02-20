//Shivam Kumar Gupta
//20214082
//CSE-D

#include <stdio.h>
#include <stdlib.h>

// initialization of node
struct node
{
    int ssn;
    char *name;
    char *department;
    double salary;
    char *designation;
    long int phone_number;
    struct node *next;
    struct node *prev;
};

// creation of node
struct node *create(int ssn, char name[20], char department[20], double salary, char designation[20], long int phone_number){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->name = malloc(sizeof(char)*20);
    p->designation = malloc(sizeof(char)*20);
    p->department = malloc(sizeof(char)*20);
    p->ssn=ssn;
    p->name=name;
    p->department=department;
    p->salary=salary;
    p->designation=designation;
    p->phone_number=phone_number;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

// display single node only
void display(struct node *p)
{
    printf("Deleted Employee info.\n");
    printf("SSN number :: %d\n", p->ssn);
    printf("Employee name :: ");
    printf("%s\n",p->name);
    printf("Department name :: %s\n", p->department);
    printf("Salary :: %f\n", p->salary);
    printf("Designation name :: ");
    printf("%s\n",p->designation);
    printf("Phone number :: %lu\n\n\n", p->phone_number);
}

// count the no. of node and display all node
void display_all(struct node *start)
{
    struct node *p = start;
    int c = 0;
    while (p != NULL)
    {
        printf("Employee No. %d info.\n", c + 1);
        printf("SSN number :: %d\n", p->ssn);
        printf("Employee name :: ");
        printf("%s\n",p->name);
        printf("Department name :: %s\n", p->department);
        printf("Salary :: %f\n", p->salary);
        printf("Designation name :: ");
        printf("%s\n",p->designation);
        printf("Phone number :: %lu\n\n\n", p->phone_number);
        p=p->next;
        c++;
    }

    printf("Total number of node is %d\n", c);
}


// insertation at end
void insert_at_end(struct node *start, int ssn, char name[20], char department[20], double salary, char designation[20], long int phone_number)
{
    struct node *p = create(ssn, name, department, salary, designation, phone_number);
    while(start->next!=NULL){
        start=start->next;
    }
    p->prev = start;
    p->next = NULL;
    start->next = p;
    // printf("%d\n",p->ssn);
}

// deletion at end
void deletion_at_end(struct node *start)
{
    while(start->next!=NULL){
        start=start->next;
    }
    struct node *temp = start;
    start=start->prev;
    start->next=NULL;
    // display(temp);
    free(temp);
}

// insertation at beg
struct node *insert_at_beg(struct node *start, int ssn, char name[20], char department[20], double salary, char designation[20], long int phone_number)
{
    struct node *p = create(ssn, name, department, salary, designation, phone_number);
    p->prev = start->prev;
    p->next = start;
    return p;
}

// deletion at beg
struct node *deletion_at_beg(struct node *start)
{
    struct node *temp = start;
    start = start->next;
    start->prev=NULL;
    // display(temp);
    free(temp);
    return start;
}




// main
int main()
{
    int a;
    // creating first node
    struct node *start = create(325819946,"Shivam", "Designing", 200000.0, "Manager", 987643210);
    printf("Enter the number of node u want to create\n");
    scanf("%d", &a);
    // display_all(start);
    // printf("%s",start->name);
    // creating n node by end inseration
    for (int i = 0; i < a; i++)
    {
        int ssn;
        char name[20];
        char department[20];
        double salary;
        char designation[20];
        long int phone_number;
        struct node *next;
        struct node *prev;
        printf("Enter Info of Employee %d\n", i + 1);
        printf("Enter SSN number :: ");
        scanf("%d",&ssn);
        printf("Enter Employee name :: ");
        scanf("%s",name);
        printf("Enter Department name :: ");
        scanf("%s",department);
        printf("Enter Designation :: ");
        scanf("%s",designation);
        printf("Enter Salary :: ");
        scanf("%f",&salary);
        printf("Enter Phone number :: ");
        scanf("%llu",&phone_number);
        insert_at_end(start,ssn, name, department, salary, designation, phone_number);
        // display_all(start);
    }
    start=insert_at_beg(start,132435726,"Shyam","accounting",150.0,"accountant",341567892);
    printf("\n\ndata after entering all node\n");
    display_all(start);
    deletion_at_end(start);
    printf("\n\ndata after deleting last node\n");
    display_all(start);
    start=deletion_at_beg(start);
    printf("\n\ndata after deleting starting node\n");
    display_all(start);
}
//output
/*
Enter the number of node u want to create
1
Enter Info of Employee 1
Enter SSN number :: 123
Enter Employee name :: ram
Enter Department name :: painting
Enter Designation :: painter
Enter Salary :: 2334.0
Enter Phone number :: 234567819


data after entering all node
Employee No. 1 info.
SSN number :: 132435726
Employee name :: Shyam
Department name :: accounting
Salary :: 150.000000
Designation name :: accountant
Phone number :: 341567892


Employee No. 2 info.
SSN number :: 325819946
Employee name :: Shivam
Department name :: Designing
Salary :: 200000.000000
Designation name :: Manager
Phone number :: 987643210


Employee No. 3 info.
SSN number :: 123
Employee name :: ram
Department name :: painting
Salary :: 0.000000
Designation name ::
Phone number :: 234567819


Total number of node is 3


data after deleting last node
Employee No. 1 info.
SSN number :: 132435726
Employee name :: Shyam
Department name :: accounting
Salary :: 150.000000
Designation name :: accountant
Phone number :: 341567892


Employee No. 2 info.
SSN number :: 325819946
Employee name :: Shivam
Department name :: Designing
Salary :: 200000.000000
Designation name :: Manager
Phone number :: 987643210


Total number of node is 2


data after deleting starting node
Employee No. 1 info.
SSN number :: 325819946
Employee name :: Shivam
Department name :: Designing
Salary :: 200000.000000
Designation name :: Manager
Phone number :: 987643210


Total number of node is 1
*/