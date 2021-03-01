
#include<stdio.h>
int main()
{
    int arr[100];
    int a = 0;
    //Enter Elements in Array and Calculate Sum:
    printf("Number of Elements: ");
    scanf("%d", &a);
    int sum  =0;
    for (int _a = 0; _a < a; _a++)
    {
        scanf("%d", &arr[_a]);
        sum += arr[_a];
    }
    printf("Sum: %d\n",sum);
    return 0;
}
