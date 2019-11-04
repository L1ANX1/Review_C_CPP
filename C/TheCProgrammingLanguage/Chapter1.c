
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
// #include <stdio.h>
// #include <stdlib.h>
// #define IN 1  /* inside a word */
// #define OUT 0 /* outside a word */
// /* count lines, words, and characters in input */
// int main()
// {
//   int c, nl, nw, nc, state;
//   state = OUT;
//   nl = nw = nc = 0;
//   while ((c = getchar()) != EOF)
//   {
//     ++nc;
//     if (c == '\n')
//       ++nl;
//     if (c == ' ' || c == '\n' || c == '\t')
//       state = OUT;
//     else if (state == OUT)
//     {
//       state = IN;
//       ++nw;
//     }
//   }
//   printf("%d %d %d\n", nl, nw, nc);

//   // todo 练习 1-11 你准备如何测试单词计数程序？如果程序中存在某种错误，那么什么样的输入最可能发现这类错误呢’
//   // todo 练习 1-12 编写一个程序，以每行一个单词的形式打印其输入。

//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.6. 数组
// #include <stdio.h>
// #include <stdlib.h>
// #define IN 1  /* inside a word */
// #define OUT 0 /* outside a word */
// /* count lines, words, and characters in input */
// int main()
// {
//   int c, i, nwhite, nother;
//   int ndigit[10];
//   nwhite = nother = 0;
//   for (i = 0; i < 10; ++i)
//     ndigit[i] = 0;
//   while ((c = getchar()) != EOF)
//     if (c >= '0' && c <= '9')
//       ++ndigit[c - '0'];
//     else if (c == ' ' || c == '\n' || c == '\t')
//       ++nwhite;
//     else
//       ++nother;
//   printf("digits =");
//   for (i = 0; i < 10; ++i)
//     printf(" %d", ndigit[i]);
//   printf(", white space = %d, other = %d\n",
//          nwhite, nother);

// 练习 1-13 编写一个程序，打印输入中单词长度的直方图。水平方向的直方图比较容易绘制，垂直方向的直方图则要困难些。
// 练习 1-14 编写一个程序，打印输入中各个字符出现频度的直方图。

//   system("pause"); // stdlib.h
//   return 0;
// }

// 1.7. 函数
// #include <stdio.h>
// #include <stdlib.h>
// int power(int m, int n);
// /* test power function */
// int main()
// {
//   int i;
//   for (i = 0; i < 10; ++i)
//     printf("%d %d %d\n", i, power(2, i), power(-3, i));

//   system("pause"); // stdlib.h
//   return 0;
// }
// /* power: raise base to n-th power; n >= 0 */
// int power(int base, int n)
// {
//   int i, p;
//   p = 1;
//   for (i = 1; i <= n; ++i)
//     p = p * base;
//   return p;
// }
// 练习 1-15 重新编写 1.2 节中的温度转换程序，使用函数实现温度转换计算。

// 1.8. 参数——传值调用
/* power: raise base to n-th power; n >= 0; version 2 */
// int power(int base, int n)
// {
//   int p;
//   for (p = 1; n > 0; --n)
//     p = p * base;
//   return p;
// }

// 1.9. 字符数组
// #include <stdio.h>
// #include <stdlib.h>
// #define MAXLINE 1000 /* maximum input line length */
// int getline(char line[], int maxline);
// void copy(char to[], char from[]);
// /* print the longest input line */
// int main()
// {
//   int len;               /* current line length */
//   int max;               /* maximum length seen so far */
//   char line[MAXLINE];    /* current input line */
//   char longest[MAXLINE]; /* longest line saved here */
//   max = 0;
//   while ((len = getline(line, MAXLINE)) > 0)
//     if (len > max)
//     {
//       max = len;
//       copy(longest, line);
//     }
//   if (max > 0) /* there was a line */
//     printf("%s", longest);

//   system("pause"); // stdlib.h
//   return 0;
// }
// /* getline: read a line into s, return length */
// int getline(char s[], int lim)
// {
//   int c, i;
//   for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//     s[i] = c;
//   if (c == '\n')
//   {
//     s[i] = c;
//     ++i;
//   }
//   s[i] = '\0';
//   return i;
// }
// /* copy: copy 'from' into 'to'; assume to is big enough */
// void copy(char to[], char from[])
// {
//   int i;
//   i = 0;
//   while ((to[i] = from[i]) != '\0')
//     ++i;
// }

// 练习 1-16 修改打印最长文本行的程序的主程序 main，使之可以打印任意长度的输入行的长度，并尽可能多地打印文本。
// #include <stdio.h>
// #include <stdlib.h>
// #define MAXLINE 10 /* maximum input line length */
// int getline(char line[], int maxline);
// void copy(char to[], char from[]);
// /* print the longest input line */
// int main()
// {
//   int len;               /* current line length */
//   int max;               /* maximum length seen so far */
//   char line[MAXLINE];    /* current input line */
//   char longest[MAXLINE]; /* longest line saved here */
//   max = 0;
//   while ((len = getline(line, MAXLINE)) > 0)
//     printf("%d ", len);
//   if (len > max)
//   {
//     max = len;
//     copy(longest, line);
//   }
//   if (max > 0) /* there was a line */
//     printf("%s", longest);

//   system("pause"); // stdlib.h
//   return 0;
// }
// /* getline: read a line into s, return length */
// int getline(char s[], int lim)
// {
//   int c, i, j;
//   j = 0;
//   for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//   {
//     s[j++] = c;
//   }
//   if (c == '\n')
//   {
//     s[i++] = c;
//     ++i;
//   }
//   s[j] = '\0';
//   return i;
// }
// /* copy: copy 'from' into 'to'; assume to is big enough */
// void copy(char to[], char from[])
// {
//   int i;
//   i = 0;
//   while ((to[i] = from[i]) != '\0')
//     ++i;
// }
// 练习 1-17 编写一个程序，打印长度大于 80 个字符的所有输入行。
// 练习 1-18 编写一个程序，删除每个输入行末尾的空格及制表符，并删除完全是空格的行。
// 练习 1-19 编写函数 reverse(s)，将字符串 s 中的字符顺序颠倒过来。使用该函数编写一个程序，每次颠倒一个输入行中的字符顺序。

// 1.10.
#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 10 /* maximum input line length */
int getline(void);
void copy(void);
/* print longest input line; specialized version */
int main()
{
  int len;
  extern int max;
  extern char longest[];
  max = 0;
  while ((len = getline()) > 0)
    if (len > max)
    {
      max = len;
      copy();
    }
  if (max > 0) /* there was a line */
    printf("%s", longest);
  return 0;
}
/* getline: specialized version */
int getline(void)
{
  int c, i;
  extern char line[];
  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n')
  {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}
/* copy: specialized version */
void copy(void)
{
  int i;
  extern char line[], longest[];
  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}
// 练习 1-20 编写程序 detab，将输入中的制表符替换成适当数目的空格，使空格充满到 下一个制表符终止位的地方。假设制表符终止位的位置是固定的，比如每隔 n 列就会出现一个制表符终止位。n 应该作为变量还是符号常量呢？
// 练习 1-21 编写程序 entab，将空格串替换为最少数量的制表符和空格，但要保持单词之间的间隔不变。假设制表符终止位的位置与练习 1-20 的 detab 程序的情况相同。当使用一个制表符或者一个空格都可以到达下一个制表符终止位时，选用哪一种替换字符比较好？
// 练习 1-22 编写一个程序，把较长的输入行“折”成短一些的两行或多行，折行的位置 在输入行的第 n 列之前的最后一个非空格之后。要保证程序能够智能地处理输入行很长以及 在指定的列前没有空格或制表符时的情况。
// 练习 1-23 编写一个删除 C 语言程序中所有的注释语句。要正确处理带引号的字符串与 字符常量。在 C 语言中，注释不允许嵌套。
// 练习 1-24 编写一个程序，查找 C 语言程序中的基本语法错误，如圆括号、方括号、花 括号不配对等。要正确处理引号（包括单引号和双引号）、转义字符序列与注释。（如果读者 想把该程序编写成完全通用的程序，难度会比较大。）