#include<stdio.h>
void quicksort(int [],int,int);
int main()
{
  int i,size,number[25];
  printf("Enter the size: ");
  scanf("%d",&size);
  printf("Enter elements: ");
  for(i=0;i<size;i++)
  scanf("%d",&number[i]);
  quicksort(number,0,size-1);
  printf("The Sorted Order is: ");
  for(i=0;i<size;i++)
  printf(" %d ",number[i]);
  return 0;
}
void quicksort(int number[25],int first,int last)
{
  int i,j,pivot,temp;
  if(first<last)
  {
  pivot=first;
  i=first;
  j=last;
  while(i<j)
  {
   while(number[i]<=number[pivot]&&i<last)
   i++;
   while(number[j]>number[pivot])
   j--;
   if(i<j)
   {
   temp=number[i];
   number[i]=number[j];
   number[j]=temp;
   }
 }
  temp=number[pivot];
  number[pivot]=number[j];
  number[j]=temp;
  quicksort(number,first,j-1);
  quicksort(number,j+1,last);
 }
}