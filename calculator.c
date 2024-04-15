#include <stdio.h>
void main()
{
    double a, b;
    printf("\nenter 1st valu :- ");
    scanf("%lf", &a);
    printf("\nenter 2nd valu :- ");
    scanf("%lf", &b);
    int x;
    printf("\n\n> for sumation press '1'\n\n> for substraction press '2'\n\n> for maltiplaction press '3'\n\n> for division press '4'");
    printf("\n\nnow what do you want :- ");
    scanf("%d", &x);
    int y, z, m, n;
    y = a + b;
    z = a - b;
    m = a * b;
    n = a / b;
    float o, p, q, r;
    o = a + b;
    p = a - b;
    q = a * b;
    r = a / b;
    if (x == 1)
    {
        if (a == (int)a && b == (int)b)
        {
            printf("\nthe sum is :- %d", y);
        }
        else if (a == (float)a || b == (float)b)
        {
            {
                printf("\nthe sum is :- %f", o);
            }
        }
    }
    else if (x == 2)
    {
        if (a == (int)a && b == (int)b)
        {
            printf("\nthe substraction is :- %d", z);
        }
        else if (a == (float)a || b == (float)b)
        {
            {
                printf("\nthe substraction is :- %f", p);
            }
        }
    }
    else if (x == 3)
    {
        if (a == (int)a && b == (int)b)
        {
            printf("\nthe maltiplacation is :- %d", m);
        }
        else if (a == (float)a || b == (float)b)
        {
            {
                printf("\nthe maltiplacation is :- %f", q);
            }
        }
    }
    else if (x == 4)
    {
        if (b != 0)
        {
            if (a == (int)a && b == (int)b)
            {
                if(a>b)
                {
                printf("\nthe division is :- %d", n);
                }
                else if(b>a)
                {
                 printf("\nthe division is :- %f", r);
                }
            }
            else if (a == (float)a || b == (float)b)
            {
                {
                    printf("\nthe division is :- %f", r);
                }
            }
        }
        else if (b == 0)
        {
            printf("\nerror , can not divisible by 'zero");
        }
    }
    else
    {
        printf("\nerror , invalid operator");
    }
}