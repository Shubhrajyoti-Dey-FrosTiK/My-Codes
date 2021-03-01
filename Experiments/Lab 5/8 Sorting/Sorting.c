//Sorting Algorithm

#include <stdio.h>
int main()
{
    int arr[100];
    int n = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n ; i++)
    {
        for (int j = i; j <n ; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }
    for( int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}