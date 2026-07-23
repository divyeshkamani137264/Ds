#include <stdio.h>

int main()
{
    int A[3], B[3], C[3];
    int i;

    printf("Enter 3 elements for array A:\n");
    for(i = 0;i < 3; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\nEnter 3 elements for array B:\n");
    for(i = 0;i < 3; i++)
    {
        scanf("%d", &B[i]);
    }
    for(i = 0; i < 3; i++)
    {
    C[i] = A[i] + B[i];
    }
    printf("\narray C (A + B):\n");
    for(i =0; i < 3; i++)
    {
        printf("%d", C[i]);
    }
     return 0;
}
