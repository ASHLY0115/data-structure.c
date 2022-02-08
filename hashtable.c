#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 5

int h[TABLE_SIZE]={NULL};

void insert(){
    int key,index,i,flag=0,hkey;
    printf("\nEnter a value to insert into hash table\n");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE;i++){
        index=(hkey+i)%TABLE_SIZE;
        if(h[index] == NULL){
            h[index]=key;
            break;
        }
    }
    if(i == TABLE_SIZE)
     printf("\nHash table is full!!\n");
}
void search(){
    int key,index,i,flag=0,hkey;
    printf("\nEnter the element to be searched:\n");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    for(i=0;i<TABLE_SIZE; i++){
        index=(hkey+i)%TABLE_SIZE;
        if(h[index]==key){
            printf("The element is found at index %d",index);
            break;
        }
    }
    if(i == TABLE_SIZE)
        printf("\n This element not found\n");
}
void display(){
    int i;
    printf("\nThe elemets in the Hash table: \n");
    for(i=0;i< TABLE_SIZE; i++)
    printf("\nat index %d \t value =  %d",i,h[i]);
}
int main(){
    int choice,i;
    while(1){
        printf("\n1. Insert\t 2. Display \t3. Search \t4.Exit \nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
}