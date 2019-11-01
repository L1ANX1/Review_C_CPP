
// 1.1. 入门
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   printf("hello, world\n");
//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.2. 变量与算术表达式
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// // 1.2.-1
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
//   float fahr, celsius;
//   float lower, upper, step;
//   lower = 0;   /* lower limit of temperatuire scale */
//   upper = 300; /* upper limit */
//   step = 20;   /* step size */
//   fahr = lower;
//   while (fahr <= upper)
//   {
//     celsius = (5.0 / 9.0) * (fahr - 32.0);
//     printf("%3.0f %6.1f\n", fahr, celsius);
//     fahr = fahr + step;
//   }
//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.3. for 语句
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int fahr;
//   for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//     printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.4. 符号常量
// #include <stdio.h>
// #include <stdlib.h>
// #define LOWER 0   /* lower limit of table */
// #define UPPER 300 /* upper limit */
// #define STEP 20   /* step size */
// int main()
// {
//   int fahr;
//   for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//     printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.5. 字符输入／输出
// 1.5.1. 文件复制
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 1.5.1.-1
// int c;
// c = getchar();
// while (c != EOF)
// {
//   putchar(c);
//   c = getchar();
// }
// 1.5.1.-2
//   int c;
//   while ((c = getchar()) != EOF)
//     putchar(c);
// 练习1-6 验证表达式 getchar() != EOF 的值是 0 还是 1。
// printf("%d\n", getchar() != EOF);
// 练习1-7 打印 EOF 值
// printf("%d\n", EOF);

//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.5.2. 字符计数
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
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

//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.5.3. 行计数
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//   int c, nl;
//   nl = 0;
//   while ((c = getchar()) != EOF)
//     if (c == '\n')
//       ++nl;
//   printf("%d\n", nl);

// 练习 1-9 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
// int c, nl;
// nl = 0;
// while ((c = getchar()) != EOF)
// {
//   if (nl == 0 && c == ' ')
//   {
//     putchar(c);
//     ++nl;
//   }
//   if (c != ' ')
//   {
//     putchar(c);
//     nl = 0;
//   }
// }
// 练习 1-10 编写一个将输入复制到输出的程序，并将其中的制表符替换为\t，把回退符替换为\b，把反斜杠替按为\\。这样可以将制表符和回退符以可见的方式显示出来。

//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.5.4
#include <stdio.h>
#include <stdlib.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
int main()
{
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);

  // todo 练习 1-11 你准备如何测试单词计数程序？如果程序中存在某种错误，那么什么样的输入最可能发现这类错误呢’
  // todo 练习 1-12 编写一个程序，以每行一个单词的形式打印其输入。

  system("pause"); // stdlib.h
  return 0;
}