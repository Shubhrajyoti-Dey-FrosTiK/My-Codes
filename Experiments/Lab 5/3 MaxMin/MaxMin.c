#include <stdio.h>
int main()
{
    int arr[100];
    int max = -2147483646, min = 2147483646;
    int a = 0;
    printf("Number of Elements: ");
    scanf("%d", &a);
    for (int _a = 0; _a < a; _a++)
    {
        scanf("%d", &arr[_a]);
        if (max < arr[_a]){
            max = arr[_a];
        }
        if(min > arr[_a])
        {
            min = arr[_a];
        }
    }
    printf("Max Value : %d\nMin Value : %d\n",max, min);

    return 0;
}