/*********************************
 file    : Linear queue
 author  : Ashly Rose Antony
 version : 1.0
 date    : 10/12/21
 **********************************/
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void insert();
void delete();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;
 void main()
{
  int choice;
  while(1)
  {
    printf("1.insert element to queue \n ");
    printf("2.delete element to queue \n");
    printf("3.display all /*********************************
 file    : circular queue
 author  : Ashly Rose Antony
 version : 1.0
 date    : 10/12/21
 **********************************/elements of queue \n");
    printf("4.quit \n");
    printf("enter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      insert();
      break;
      case 2:
      delete();
      break;
      case 3:
      display();
      case 4:
      exit(1);
      default:
      printf("wrong choice \n");
      }
      }
      }
      
  void insert()
  {
    int add_item;
    if (rear == MAX-1)
    printf("queue overflow \n");
    else
    {
    if(front == -1)
    front=0;
    printf("insert element in queue :\n");
    scanf("%d",&add_item);
    rear = rear+1;
    queue_array[rear] = add_item;
    }
    }
    
    void delete()
    {
    if (front == -1 || front > rear )
    {
    printf("queue is underflow \n ");
    return;
    }
    else
    {
    printf("element deleted from queue is : %d\n ",queue_array[front]);
               front=front+1;
        }
        }
        
        void display()
        {
        int i;
        if(rear == -1)
           printf("queue is empty\n");
        else 
        {
        printf("queue is :\n");
        for(i=front;i<=rear;i++)
           printf("%d",queue_array[i]);
           printf("\n");
           
           }
           }   
        
    
    
        
      

