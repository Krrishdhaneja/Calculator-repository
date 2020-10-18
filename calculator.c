#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double num1;
    double num2;
    double op;
    printf("plus(type 1)\n");
    printf("minus(type 2)\n");
    printf("multiply(type 3)\n");
    printf("divide(type 4)\n");
    printf("square(type 5)\n");
    printf("square root(type 6)\n");
    printf("exponentiation(type 7)\n");
    printf("absolute value(type 8)\n");
    printf("cube(type 9)\n");
    printf("cube root(type 10)\n");
    printf("\n");
    printf("type the first number:\n");
    scanf("%lf", &num1);
    printf("type the second number:\n");
    scanf("%lf", &num2);
    printf("type the operator(type 0 to know all the operators):\n");
    scanf("%lf", &op);

    if (op == 0)
    {
        printf("plus(type 1)\n");
        printf("minus(type 2)\n");
        printf("multiply(type 3)\n");
        printf("divide(type 4)\n");
        printf("square(type 5)\n");
        printf("square root(type 6)\n");
        printf("exponentiation(type 7)\n");
        double z;
        printf("type 1 to exit:\n");
        scanf("%lf", &z);
        if (z == 1)
        {
            printf("Have A Good Day");
        }
    }
    else if (op == 1)
    {
        printf("%lf\n", num1 + num2);
        double z;
        printf("type 1 to exit:\n");
        scanf("%lf", &z);
        if (z == 1)
        {
            printf("Have A Good Day");
        }
    }
    else if (op == 2)
    {
        printf("%lf\n", num1 - num2);
        double z;
        printf("type 1 to exit:\n");
        scanf("%lf", &z);
        if (z == 1)
        {
            printf("Have A Good Day");
        }
    }
    else if (op == 3)
    {
        printf("%lf\n", num1 * num2);
        double z;
        printf("type 1 to exit:\n");
        scanf("%lf", &z);
        if (z == 1)
        {
            printf("Have A Good Day");
        }
    }
    else if (op == 4)
    {
        printf("%lf\n", num1 / num2);
        double z;
        printf("type 1 to exit:\n");
        scanf("%lf", &z);
        if (z == 1)
        {
            printf("Have A Good Day");
        }
    }
    else if (op == 5)
    {
        double d;
        printf("type 1 for num1 to be squared or type 2 for num2 be squared:\n");
        scanf("%lf", &d);
        if (d == 1)
        {
            printf("%lf\n", pow(num1, 2));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
        else if (d == 2)
        {
            printf("%lf\n", pow(num2, 2));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
    }
    else if (op == 6)
    {
        double k;
        printf("which number you want to be rooted(type 1[for num1] or 2[for num2]):\n");
        scanf("%lf", &k);
        if (k == 1)
        {
            printf("%lf\n", sqrt(num1));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
        else if (k == 2)
        {
            printf("%lf\n", sqrt(num2));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
        else
        {
            printf("nothing");
        }
    }
    else if (op == 7)
    {
        printf("%lf\n", pow(num1, num2));
        double z;
        printf("type 1 to exit:\n");
        scanf("%lf", &z);
        if (z == 1)
        {
            printf("Have A Good Day");
        }
    }
    else if (op == 8)
    {
        double q;

        printf("type the number of which you wan to get absolute value(type [1] for num1 or [2] for num2):\n");
        scanf("%lf", &q);
        if (q == 1)
        {
            printf("%lf\n", abs(num1));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
        else if (q == 2)
        {
            printf("%lf\n", abs(num2));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
    }
    else if (op == 9)
    {
        double w;
        printf("which number you want to be cubed(type [1] for num1 or [2] for num2):\n");
        scanf("%lf", &w);
        if (w == 1)
        {
            printf("%lf\n", pow(num1, 3));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
        else if (w == 2)
        {
            printf("%lf\n", pow(num2, 3));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
    }
    else if (op == 10)
    {
        double e;
        printf("which number you want to be cube rooted(type[1] for num1 or [2] for num2):\n");
        scanf("%lf", &e);
        if (e == 1)
        {
            printf("%lf\n", cbrt(num1));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
        else if (e == 2)
        {
            printf("%lf\n", cbrt(num2));
            double z;
            printf("type 1 to exit:\n");
            scanf("%lf", &z);
            if (z == 1)
            {
                printf("Have A Good Day");
            }
        }
    }

    else
    {
        printf("nothing to do");
    }

    return 0;
}
