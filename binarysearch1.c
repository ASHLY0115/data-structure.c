#include <stdio.h>

/*********************************
 file    : Binary search
 author  : Ashly Rose Antony
 version : 1.0
 date    : 29/11/21
 **********************************/
int main()
{
  int c, first, last, middle, n, search, array[10],count=0;

  printf("Enter number of elements\n");
  count++;
  scanf("%d", &n);
  count++;

  printf("Enter %d integers\n", n);
  count++;
  for (c = 0; c < n; c++,count++)
    scanf("%d", &array[c]);
    count++;

  printf("Enter value to find\n");
  count++;
  scanf("%d", &search);
  count++;

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
    printf("\n Time complexity = %d",count);
    printf("\n space complexity = 64");

  return 0;
}
