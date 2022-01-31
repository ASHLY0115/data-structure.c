#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node *X;
node* create(){
node *newNode;
newNode = malloc(sizeof(node));
printf("\nEnter data: ");
scanf("%d",&newNode->data);
return newNode;
}
void display(){
struct node *temp;
if(X==NULL){
printf("\nEmpty List\n");
}
else{
temp=X;
printf("\nList: \n");
while(temp !=NULL){
printf("%d->",temp->data);
temp=temp->next;
}
}
}
void insertAtFront(node *t){
if(X==NULL){
X=t;
X->next =NULL;
}
else{
t->next=X;
X=t;
}
}
void insertAtEnd(node *t){
if(X==NULL){
X==t;
X->next=NULL;
}
else{
node *p=X;
while(p->next !=NULL){
p=p->next;
}
p->next=t;
t->next=NULL;
}
}
void insertAtPos(node *t,int pos){
node *p, *newNode;
int i=1;
p=X;
while(i++<pos-1){
p=p->next;
}
t->next =p->next;
p->next =t;
}
void deleteAtFront(){
node *t=X;
X=X->next;
free(t);
}
void deleteAtEnd(){
node *t,*p=X;
while(p->next->next !=NULL){
p=p->next;
}
t=p->next;
p->next =NULL;
free(t);
}
void deleteAtPos(int pos){
node *p,*t;
int i=1;
p=X;
while(i++<pos-1){
p=p->next;
}
if(p==X){
t=X;
X=X->next;
free(t);
}
else if(p->next->next=NULL){
t=p->next;
p->next=NULL;
free(t);
}
else{
t=p->next;
p->next=t->next;
}
}
int main(){
int n,pos;
while(1){
printf("\n1.Display\n2.Insert at the beginning\n3.Insert at the end\n4.Insert at particular position\n5.Delete from the beginning\n6.Delete from the end\n7.Delete from particular position\n8.Exit\n");
printf("Enter your choice: ");
fflush(stdin);
scanf("%d",&n);
node *t;
switch(n){
case 1:
display();
break;
case 2:
t=create();
insertAtFront(t);
display();
break;
case 3:
t=create();
insertAtEnd(t);
display();
break;
case 4:
printf("Enter the position: ");
scanf("%d",&pos);
t= create(t);
insertAtPos(t,pos);
display();
break;
case 5:
deleteAtFront();
display();
break;
case 6:
deleteAtEnd();
display();
break;
case 7:
printf("Enter the position: ");
scanf("%d",&pos);
deleteAtPos(pos);
display();
break;
case 8:
exit(0);
}
}
return 0;
}