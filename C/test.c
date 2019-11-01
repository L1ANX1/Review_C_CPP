
#include <stdio.h>
#include <stdlib.h>
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
int main()
{
  int a[5] = {7, 6, 4, 3, 1};
  // int res = maxProfit(a, 5);

  // char *J = "z";
  // char *S = "zz";
  int res = removeElement(a, 5, 3);
  for (int i = 0; i < res; i++)
    printf("%d ", a[i]);
  system("pause");
}

int removeElement(int *nums, int numsSize, int val)
{
  int c = 0;
  for (int i = 0; i < numsSize - 1; i++)
  {
    for (int j = i; j < numsSize; j++)
    {
      if (nums[i] == val && nums[j] != val)
      {
        nums[i] = nums[j];
        nums[j] = val;
        c++;
        break;
      }
    }
  }
  return c;
}
[ 0, 1, 2, 2, 3, 0, 4, 2 ]