# C-Day-62-Smallest-Odd-Number
# C Day 62 - Smallest Odd Number

This program takes multiple numbers from the user and finds the smallest positive odd number.

## Example

Input:

```text
25
18
41
9
31
20
```

Output:

```text
Smallest odd number = 9
```

## Concepts Used

* `for` loop
* `if` condition
* Nested `if`
* Modulus operator `%`
* AND operator `&&`
* User input using `scanf()`
* Finding the smallest number

## How It Works

1. The user enters how many numbers they want to check.
2. The program takes each number using a `for` loop.
3. `number % 2 != 0` checks whether the number is odd.
4. The program checks whether the number is positive.
5. The first positive odd number is stored in `smallest_odd`.
6. Other odd numbers are compared with the stored value.
7. If a smaller odd number is found, it replaces the previous value.
8. Finally, the smallest positive odd number is displayed.

## C Code

```c
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
```

## Output

```text
Enter how many numbers: 6
Enter number 1: 25
Enter number 2: 18
Enter number 3: 41
Enter number 4: 9
Enter number 5: 31
Enter number 6: 20

Smallest odd number = 9
```

## Goal

The goal of this project is to practice loops, conditions, the modulus operator, and finding the smallest positive odd number in C.
