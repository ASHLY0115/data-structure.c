/*********************************
 file    : Linear queue
 author  : Ashly Rose Antony
 version : 1.0
 date    : 10/12/21
 **********************************/

  #include<stdio.h>
#define MAX 10

    void insert();  
    void delete();  
    void display();  
    int front = -1, rear = -1;  
    int queue[MAX];
    
int main(){
    int op;
    
    do{
        printf("\n\nEnter option :\n");
        printf("1.Enqueue\t2.Dequeue\t3.exit\n");
        scanf("%d", &op);
        
        if(op == 1){
            insert();
            display();
        }
        else if(op == 2){
            delete();
            display();
        }
    }while(op != 3);
}


    void insert()  
    {  
        int item;  
        printf("Enter the element\n");  
        scanf("\n%d",&item);      
        if(rear == MAX-1)  
        {  
            printf("\nOVERFLOW\n");  
            return;  
        }  
        if(front == -1 && rear == -1)  
        {  
            front = 0;  
            rear = 0;  
        }  
        else   
        {  
            rear = rear+1;  
        }  
        queue[rear] = item;   
    }
    
    void delete()  
    {  
        int item;   
        if (front == -1 || front > rear)  
        {  
            printf("\nUNDERFLOW\n");  
            return;      
        }  
        else  
        {  
            item = queue[front];  
            if(front == rear)  
            {  
                front = -1;  
                rear = -1 ;  
            }  
            else   
            {  
                front = front + 1;  
            }
        }  
    }
    void display()  
    {  
        int i;  
        if(rear == -1)  
        {  
            printf("\nEmpty queue\n");  
        }  
        else  
        {   printf("\n--- Queue ---");  
            for(i=front;i<=rear;i++)   
                printf("\n%d",queue[i]);    
        }  
    }
