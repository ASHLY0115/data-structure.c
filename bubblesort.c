
/*********************************
 file    : Bubble sort
 author  : Ashly Rose Antony
 version : 1.0
 date    : 29/11/21
 **********************************/
#include <stdio.h>

int main()
{
  int array[10], n, c, d, swap,count=0;

  printf("Enter number of elements\n");
  count++;
  scanf("%d", &n);
  count++;
  printf("Enter %d integers\n", n);
  count++;
  for (c = 0; c < n; c++,count++)
    scanf("%d", &array[c]);
    count++;

  for (c = 0 ; c < n - 1; c++,count++)
  {
    for (d = 0 ; d < n - c - 1; d++,count++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");
  count++;

  for (c = 0; c < n; c++,count++)
     printf("%d\n", array[c]);
     count++;
     printf("time complexity = %d",count);
     printf("\n space complexity = 56");
     
  return 0;
}
