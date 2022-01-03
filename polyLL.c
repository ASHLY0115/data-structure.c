#include<stdio.h>
#include<stdlib.h>

struct node
{
int coeff,expo;
struct node* next;
};
struct node* create(struct node* head, int coeff, int expo)
{
struct node *temp, *flag;

//if poly empty node to head node
if(head==NULL)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->coeff=coeff;
temp->expo=expo;
temp->next=NULL;
head=temp;
}
else
{
//go to last node and append
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
flag=(struct node*)malloc(sizeof(struct node));
flag->coeff=coeff;
flag->expo=expo;
flag->next=NULL;
temp->next=flag;
}
return head;
}

//add polynomial
struct node* polyAdd(struct node *p1,struct node *p2,struct node *sum)
{

struct node *poly1=p1, *poly2=p2,*res;

if(poly1!=NULL && poly2==NULL)
{
sum=poly1;
return sum;
}
else if(poly1==NULL && poly2!=NULL)
{
sum=poly2;
return sum;
}
while (poly1!=NULL && poly2!=NULL)
{
if(sum==NULL)
{
sum=(struct node*)malloc(sizeof(struct node));
res=sum;
}
else
{
res->next=(struct node*)malloc(sizeof(struct node));
res=res->next;
}
if(poly1->expo > poly2->expo)
{
res->coeff=poly1->coeff;
res->expo=poly1->expo;
poly1=poly1->next;
}
else if(poly1->expo < poly2->expo)
{
res->coeff=poly2->coeff;
res->expo=poly2->expo;
poly2=poly2->next;
}
else if(poly1->expo = poly2->expo)
{
res->coeff=poly1->coeff+poly2->coeff;
res->expo=poly1->expo;
poly1=poly1->next;
poly2=poly2->next;
}
}
while(poly1!=NULL)
{
res->next=(struct node*)malloc(sizeof(struct node));
res=res->next;

res->coeff=poly1->coeff;
res->expo=poly1->expo;
poly1=poly1->next;
}
while(poly2!=NULL)
{
res->next=(struct node*)malloc(sizeof(struct node));
res=res->next;

res->coeff=poly2->coeff;
res->expo=poly2->expo;
poly2=poly2->next;
}

res->next=NULL;
return sum;
}

void display(struct node* head)
{
struct node *temp=head;
while(temp!=NULL)
{
printf("%dx^%d",temp->coeff,temp->expo);

temp=temp->next;
if(temp!=NULL)
{
printf("+");
}
}
printf("\n");
}
void main()
{
struct node *p1=NULL,*p2=NULL,*sum=NULL;
int ch,coeff,expo;
int i=1;
while(i)
{
printf("1. Add to Polynomial 1\n");
printf("2. Add to Polynomial 2\n");
printf("3. Perform Addition\n");
printf("4. Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter coefficient\n");
scanf("%d", & coeff);
printf("Enter exponent\n");
scanf("%d",&expo);
p1=create(p1,coeff,expo);
break;
case 2:
printf("Enter coefficient\n");
scanf("%d", & coeff);
printf("Enter exponent\n");
scanf("%d",&expo);
p2=create(p2,coeff,expo);
break;
case 3:
sum=polyAdd(p1,p2,sum);
printf("Polynomial 1\n");
display(p1);
printf("Polynomial 2\n");
display(p2);
printf("\n SUM\n");
display(sum);
break;
case 4:
i=0;
break;
default:
printf("Wrong Choice!!!");
break;
}
}
}
