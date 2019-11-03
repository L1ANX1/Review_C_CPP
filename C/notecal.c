
#include <stdio.h>
#include <stdlib.h>
float power(int base, int n)
{
    float r = 1.0;
    if (n > 0)
        for (int i = 0; i < n; i++)
            r *= base;
    else if (n < 0)
        for (int i = 0; i < -n; i++)
            r *= 0.01 * base;
    // printf("m%f ", r);
    return r;
}
int main()
{
    float sum = 0.0;
    int mark = 0, markdot = 0, count = 0, countdot = 0;
    int c;
    int numlist[10] = {0};
    int cal = '+';
    int mm = 0;
    while ((c = getchar()) != EOF)
    {
        if (mm != 0)
        {
            sum = 0;
            mm = 0;
        }
        if (c == '(')
            mark++;
        if (mark == 0 && (c >= '0' && c <= '9' || c == '.' || c == '+' || c == '-'))
        {
            if (c == '+' || c == '-')
                cal = c;
            if (c >= '0' && c <= '9' || c == '.')
                if (c == '.')
                {
                    numlist[count++] = '.';
                    countdot = count - 1;
                }
                else
                    numlist[count++] = c - 48;
        }
        if (c == ')')
        {
            mark--;
            if (mark == 0)
            {
                float num = 0.0;
                for (int i = 0; i < count; i++)
                {
                    if (countdot != 0 && i > countdot)
                        num += power(10, countdot - i) * numlist[i];
                    else if (countdot == 0 || i < countdot)
                    {
                        switch (cal)
                        {
                        case '+':
                            num += power(10, (countdot ? countdot - 1 - i : count - 1 - i)) * numlist[i];
                            break;
                        case '-':
                            num -= power(10, (countdot ? countdot - 1 - i : count - 1 - i)) * numlist[i];
                            break;
                        default:
                            break;
                        }
                    }
                    // printf("%d-%f ", numlist[i],num);
                    numlist[i] = 0;
                }
                sum += num;
                countdot = 0;
                count = 0;
            }
        }
        if (c == '\n')
        {
            printf("sum= %f", sum);
            mm = 1;
        }
    }

    system("pause");
    return 0;
}
