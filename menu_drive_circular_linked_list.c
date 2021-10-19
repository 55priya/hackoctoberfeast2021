#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head=NULL;

void Insertionatbeginning()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
        temp->next=temp;
        head=temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;
    }
}
void Insertionatlast()
{
    node* temp;
    temp = (node*)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&temp->data);
    if (head == NULL)
    {
        temp->next = temp;
        head = temp;
    }
    else 
    {
        temp->next = head->next;
        head->next = temp;
        head = temp;
    }
}
void Insertionatindex()
{
    node *temp,*ptr;
    int pos,k=1;
    ptr=head->next;
    printf("\nEnter index of node to Insert: ");
    scanf("%d",&pos);
    while(k<pos-1)
    {
        ptr=ptr->next;
        k++;
    }
    if(ptr==head)
        printf("\nNo. of nodes are less than the position");
    else
    {
        temp=(node*)malloc(sizeof(node));
        printf("\nEnter data: ");
        scanf("%d",&temp->data);
        temp->next=ptr->next;
        ptr->next=temp;
    }
}
void deleteatfirst()
{
    node* temp;
    if (head == NULL)
        printf("\nList is empty.\n");
    else {
        temp = head->next;
        head->next = temp->next;
        free(temp);
    }
}
void deleteatlast()
{
    struct node* temp;
    if (head == NULL)
        printf("\nList is empty.\n");
 
    temp = head->next;
    while (temp->next != head)
        temp = temp->next;
    temp->next = head->next;
    head = temp;
}
void deleteatIndex()
{
    if (head == NULL)
        printf("\nList is empty!\n");
    else 
    {
        int pos, i = 1;
        node *temp, *position;
        temp = head;
        printf("\nEnter index of node to be deleted: ");
        scanf("%d", &pos);
        while (i <= pos - 1) 
        {
            temp = temp->next;
            i++;
        }
        position = temp->next;
        temp->next = position->next;
    }
}
void search()
{
    if(head==NULL)
        printf("\nList is Empty!");
    else
    {
        int k,i=1;
        printf("\nEnter element to search: ");
        scanf("%d",&k);
        node *temp;
        temp=head->next;
        while(temp->next != head) 
        {
            if(temp->data == k) 
            {
                printf("%d found at position %d\n",k,i);
                return;
            }

            temp = temp->next;
            i++;
        }

        if(temp->data == k) 
        {
            printf("%d found at position %d\n",k,i);
            return;
        }

        printf("\nElement not found");
    }
}
void Display()
{
    if(head==NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        node *temp;
        temp=head->next;
        do
        {
            printf("-->%d",temp->data);
            temp=temp->next;
        } while (temp!=head->next);
        
    }
}

int main()
{
    int m=-1;
    while(m!=0)
    {
        printf("\n*********Menu Drive Circular Linked list*********\n");  
        printf("\nChoose one option from the following list ...\n");
        printf("\nEnter Option:\n0-Exit\n1-Insertion at the beginning\n2-Insertion at the end\n3-Insertion at given position\n4-Deletion at the beginning\n");
        printf("5-Deletion at the end\n6-Deletion at the given position\n7-Search\n8-Display\n");
        scanf("%d",&m);
        switch (m)
        {
        case 0:
            break;
        case 1:
            Insertionatbeginning();
            break;
        case 2:
            Insertionatlast();
            break;
        case 3:
            Insertionatindex();
            break;
        case 4:
            deleteatfirst();
            break;
        case 5:
            deleteatlast();
            break;
        case 6:
            deleteatIndex();
            break;
        case 7:
            search();
            break;
        case 8:
            Display();
            break;
        default:
            break;
        }
    }
    return 0;
}