#include <stdio.h>
#include <stdlib.h>
int count;
void selection_sort(int A[10], int n)
{
    int i, j, min, temp;

    for(i = 0; i < n-1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            count = count + 1;

            if(A[j] < A[min])
            {
                min = j;
            }
        }

        if(min != i)
        {
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
}
int main()
{
    int n,i,A[10];
    printf("\n Read array size:");
    scanf("%d",&n);
    printf("\n Read array elements \n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    selection_sort(A,n);
    printf("\n sorted elements are\n");
    for(i=0;i<n;i++)
        printf("%d \t",A[i]);
    printf("\n total no. of comparision = %d",count);
}
