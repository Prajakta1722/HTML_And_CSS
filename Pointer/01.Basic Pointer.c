#include<stdio.h>

int main()
{
    int arr[]={10,20,30,40,50};
    int*P=arr;

    printf("\n***************\n");

    printf("\n%d",arr);
    printf("\n%d",&arr);
    printf("\n%d",P);
    printf("\n%d",*P);
    printf("\n%d",P[4]);
    printf("\n%d",sizeof(arr));
    printf("\n%d",sizeof(arr[0]));
    printf("\n%d",sizeof(P));
    printf("\n%d",sizeof(*P));

    printf("\n***************\n");

    return 0;
}
