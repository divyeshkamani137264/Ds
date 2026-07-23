#include <stdio.h>

int main()
{
    int a[10], i,sum = 0;
    float avg;

    printf("Enter 10 elements: \n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
     avg = sum / 10.0;

     printf("\nsum = %d", sum);
     printf("Avarage = %.2f\n", avg);

     return 0;
}
