/*********************************
 file    : Linear search
 author  : Ashly Rose Antony
 version : 1.0
 date    : 29/11/21
 **********************************/
#include<stdio.h>
int main(){
    int n,i,element,count=0;
    int flag=0;
    count++;
    printf("\n Enter the no. of elements in array:");
    scanf("%d",&n);
    int array[10];
    printf("\n Enter the elements of array :");
    
    for (i=0;i<n;i++){
        printf("\n Enter element %d :",i+1);
        scanf("%d",&array[i]);
        }
        printf("Enter the element to be search:");
        scanf("%d",&element);
    for(i=0;i<n;i++){
    if(array[i] == element){
       
        count++;
        printf("\n found element at position %d",i);
        flag = 1;
     }
     count++;
     }
     if(flag == 0){   
     printf("\n element not found ");
     }
     printf("\n time complexity = %d",count);
     printf("\n space complexity=56");
     return 0;
     }     

