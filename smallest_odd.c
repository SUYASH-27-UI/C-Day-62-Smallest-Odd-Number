#include <stdio.h>

int main()
{
    int n, number;
    int smallest_odd = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0 && number > 0)
        {
            if (smallest_odd == 0 || number < smallest_odd)
            {
                smallest_odd = number;
            }
        }
    }

    if (smallest_odd == 0)
    {
        printf("No positive odd number found.");
    }
    else
    {
        printf("Smallest odd number = %d", smallest_odd);
    }

    return 0;
}
