#include <stdio.h>

int main()
{
    int num, largest, smallest;
    largest = smallest = 0;

    for (int i = 1; i <= 5; i++)
        {
            printf("Enter integer %d: ", i);
            scanf("%d", &num);

        if (i == 1) {
            largest = smallest = num;
        } else {
            if (num > largest) {
                largest = num;
            }
            if (num < smallest) {
                smallest = num;
            }
        }
    }

    printf("Largest integer: %d\n", largest);
    printf("Smallest integer: %d\n", smallest);

    return 0;
}
