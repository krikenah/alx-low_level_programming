#include <main.h>

void positive_or_negative(int num)
{
    if (num > 0)
    {
    printf("The number is positive.\n");
    }
    else if (num < 0)
    {
    printf("The number is negative.\n");
    }
    else
    {
    printf("The number is zero.\n");
    }
}

int main(void)
{
    int i;

    i = 98;
    positive_or_negative(i);

    return (0);
}

