#include <stdio.h>
#include <stdlib.h>

// 1.4.
// #define LOWER 0 /* lower limit of table */
// #define UPPER 300 /* upper limit */
// #define STEP 20 /* step size */

int main()
{
  // 1.1. 入门
  // printf("hello, world\n");

  // 1.2. 变量与算术表达式
  // 1.2.-1
  // int fahr, celsius;
  // int lower, upper, step;
  // lower = 0;   /* 温度表的下限 */
  // upper = 300; /* 温度表的上限 */
  // step = 20;   /* 步长 */
  // fahr = lower;
  // while (fahr <= upper)
  // {
  //   celsius = 5 * (fahr - 32) / 9;
  //   printf("%d\t%d\n", fahr, celsius);
  //   fahr = fahr + step;
  // }

  // 1.2.-2
  // float fahr, celsius;
  // float lower, upper, step;
  // lower = 0;   /* lower limit of temperatuire scale */
  // upper = 300; /* upper limit */
  // step = 20;   /* step size */
  // fahr = lower;
  // while (fahr <= upper)
  // {
  //   celsius = (5.0 / 9.0) * (fahr - 32.0);
  //   printf("%3.0f %6.1f\n", fahr, celsius);
  //   fahr = fahr + step;
  // }

  // 1.3. for 语句
  // int fahr;
  // for (fahr = 0; fahr <= 300; fahr = fahr + 20)
  //   printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

  // 1.4. 符号常量
  // int fahr;
  // for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
  //   printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

  // 1.5. 字符输入／输出
  // 1.5.1. 文件复制
  // 1.5.1.-1
  // int c;
  // c = getchar();
  // while (c != EOF)
  // {
  //   putchar(c);
  //   c = getchar();
  // }
  // 1.5.1.-2
  // int c;
  // while ((c = getchar()) != EOF)
  //   putchar(c);

  // 练习1-6 验证表达式 getchar() != EOF 的值是 0 还是 1。
  // printf("%d\n", getchar() != EOF);
  // 练习1-7 打印 EOF 值
  // printf("%d\n", EOF);

  // 1.5.2. 字符计数
  // 1.5.2.-1
  // long nc;
  // nc = 0;
  // while (getchar() != EOF)
  //   ++nc;
  // printf("%ld\n", nc);

  // 1.5.2.-2
  // double nc;
  // for (nc = 0; gechar() != EOF; ++nc)
  // ;
  // printf("%.0f\n", nc);

  // 1.5.3. 行计数
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);

  system("pause"); // stdlib.h
  return 0;
}