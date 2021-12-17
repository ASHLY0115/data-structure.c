/*********************************
 file    : Selection sort
 author  : Ashly Rose Antony
 version : 1.0
 date    : 29/11/21
 **********************************/
#include <stdio.h>

int main()
{
  int array[10], n, c, d, position, t,count=0;

  printf("Enter number of elements\n");
  count++;
  scanf("%d", &n);
  count++;
  printf("Enter %d integers\n", n);
  count++;

  for (c = 0; c < n; c++,count++)
    scanf("%d", &array[c]);
    count++;
  for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      t = array[c];
      array[c] = array[position];
      array[position] = t;
    }
  }

  printf("Sorted list in ascending order:\n");
  count++;
  for (c = 0; c < n; c++,count++)
    printf("%d\n", array[c]);
    count++;
  printf("\n Time complexity = %d",count);
  printf("space complexity:60");
  return 0;
}
