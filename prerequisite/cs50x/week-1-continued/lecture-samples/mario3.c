#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n <= 0);

    for (int i = 0; i < n; i++)
    {
       printf("#\n");
    }

    return 0;
}