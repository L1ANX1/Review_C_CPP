
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// int main()
// {
//   printf("hello, world\n");
//   int n;
//   printf("This is a test file!\r\nInput a number: ");
//   scanf("%d", &n);
//   printf("The number is %d", n);
//   return 0;
// }

int removeElement(int *nums, int numsSize, int val)
{
  int c = 0;
  for (int i = 0; i < numsSize; i++)
  {
    if (nums[i] != val)
    {
      nums[c++] = nums[i];
    }
  }
  return c;
}
int islandPerimeter(int **grid, int gridSize, int *gridColSize)
{
  int c = 0;
  for (int i = 0; i < gridSize; i++)
  {
    for (int j = 0; j < *(gridColSize + i); j++)
    {
      if (grid[i][j] == 1)
      {
        if (i > 0 && i < gridSize - 1)
        {
          if (j <= gridColSize[i - 1] && grid[i - 1][j] == 0)
            c++;
          if (j <= gridColSize[i + 1] && grid[i + 1][j] == 0)
            c++;
        }
        else if (i <= 0)
          c++;
        else if (i >= gridSize - 1)
          c++;
        if (j > 0 && j < gridColSize[i] - 1)
        {
          if (grid[i][j - 1] == 0)
            c++;
          if (grid[i][j + 1] == 0)
            c++;
        }
        else if (j <= 0)
          c++;
        else if (j >= gridColSize[i] - 1)
          c++;
      }
    }
  }
  return c;
}
int main()
{
  // int a[5] = {7, 6, 4, 3, 1};
  // int res = removeElement(a, 5, 3);
  // for (int i = 0; i < res; i++)
  //   printf("%d ", a[i]);
  int a[4][4] = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
  int *pa[4];
  for (int i = 0; i < 4; i++)
  {
    pa[i] = a[i];
  }
  int b[4] = {4, 4, 4, 4};
  int res = islandPerimeter(pa, 4, b);
  printf("%d", res);
  system("pause");
}
