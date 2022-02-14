#include <stdio.h>
#include <stdlib.h> 
 void insert(int* tree, int size, int element)
   {
       if (tree == NULL) return; int pos = 0;
        while (pos < size)
        {
             if (tree[pos]) 
             { 
                 if (tree[pos] < element
                 ) pos = 2 * pos + 2; // right 
                 else if (tree[pos] && tree[pos] > element)
                  pos = 2 * pos + 1; // left 
                  } 
                  else 
                  { tree[pos] = element;
                   return; 
                   } 
                 } 
                } void print(int* tree, int size) 
                { 
                    for (int i = 0; i < size; i++)
                     printf("%d ", tree[i]);
                      printf("\n");
                       } 
                       int main()
                        {
                             int tree[100] = {0};
                              const int tsize = 100;
                               int n,i,element; 
                               printf( "Enter the number of elements: "); 
                               scanf("%d",&n);
                               printf("Enter the elements : ");
                                for(i=0;i<n;i++)
                                {
                                     scanf("%d",&element); 
                                     insert(tree, tsize, element);
                                }
                                       printf("The binary tree representation using array is : \n"); 
                                       print(tree, 20);
                                        return 0;
    }

