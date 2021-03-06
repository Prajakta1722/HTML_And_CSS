/*
C program to read N integers and store them in an array A.
Find the sum of all these elements using pointer.
 */

#include <stdio.h>
#include <malloc.h>

void main()
{
	int i, n, sum = 0;
	int *a;

        printf("\n***********************************\n");

     	printf("Enter the size of array A :");
        scanf("%d", &n);

        a = (int *) malloc(n * sizeof(int));

        printf("\n***********************************\n");

        printf("Enter Elements of the List :\n");
        for (i = 0; i < n; i++)
        {
		scanf("%d", a + i);
        }

        /*  Compute the sum of all elements in the given array */

        for (i = 0; i < n; i++)
        {
            sum = sum + *(a + i);
            /* this *(a+i) is used to access the value stored at the address*/
        }

        printf("Sum of all elements in array = %d\n", sum);

        printf("\n************************************\n");

        return 0;
}
