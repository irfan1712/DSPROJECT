#include <stdio.h>
#include <windows.h>

void blue()
{
    printf("\033[1;34m");
}
void red()
{
    printf("\033[1;31m");
}
void green()
{
    printf("\033[1;32m");
}

void yellow()
{
    printf("\033[1;33m");
}

void reset()
{
    printf("\033[0m");
}

int gcd(int n1, int n2) 
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int fib(int n)
{
if(n == 0)
return 0;
else if( n == 1)
return 1;
else
return(fib(n-1) + fib(n-2));
}

int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    red();
    printf("\t\t\tRECURSIVE PROGRAMS\n\n\n");
    int num, choice, i = 0, c, num1, num2;

    printf("Enter a number: ");
    scanf("%d", &num);
    blue();
    printf("1. GCD\n");
    yellow();
    printf("2. FIBONACCI\n");
    green();
    printf("3. FACTORIAL\n");
    reset();
    red();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            blue();
            printf("Enter two positive integer to find it's GCD\n");
            scanf("%d %d",&num1, &num2);
            printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
            break;
        case 2:
            yellow();
            for(c=1; c<=num; c++)
            {
                printf("%d ", fib(i));
                i++;
            }
            break;
        case 3:
            green();
            printf("Factorial of %d is %d\n", num, fact(num));
            break;
        default:
            red();
            printf("Invalid choice\n");
    }
    return 0;
}
