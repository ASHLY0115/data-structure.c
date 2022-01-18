#include<stdio.h>
void insertionSort(int [],int);
void printArray(int [],int);
int main() 
{
  int size,array[25],i;
  printf("Enter size: ");
  scanf("%d",&size);
  printf("Enter elements: ");
  for(i=0;i<size;i++)
  {
    scanf("%d",&array[i]);
  }
  insertionSort(array,size);
  printf("Sorted order is: ");
  printArray(array,size);
}
void insertionSort(int array[],int size)
 {
  for(int i=1;i<size;i++) 
  {
    int key=array[i];
    int j= i-1;
    while (key< array[j]&&j>=0)
    {
      array[j+1]=array[j];
      --j;
    }
    array[j+1]=key;
  }
}
void printArray(int array[],int size)
 {
  for(int i=0;i<size;i++)
  {
    printf("%d ",array[i]);
  }
}
