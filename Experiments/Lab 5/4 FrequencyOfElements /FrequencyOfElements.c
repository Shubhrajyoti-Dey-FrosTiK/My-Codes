// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Number of Elements: ");
//     scanf("%d", &a);
//     int arr[100];
//     int n0 = 0;
//     for (int _a = 0; _a < a; _a++)
//     {
//         scanf("%d", &arr[_a]);
//     }
//     for (int _a = 0; _a < a; _a++)
//     {
//         if (arr[_a] == 0)
//         {
//             n0++;
//         }
//     }
//     if (n0 > 0)
//     {
//         printf("Count of 0: %d", n0);
//     }
//     for (int i = 0; i < a; i++)
//     {
//         int count = 0;
//         for (int _a = i+1; _a < a; a++)
//         {
//             if (arr[i] == arr[_a] && arr[i] != 0)
//             {
//                 count++;
//                 arr[_a] = 0;
//             }
//         }
//         printf("Frequency of %d: %d", arr[i], count);
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int NoOfElements;
    printf("Enter the number of elements ");
    scanf(" %d", &NoOfElements);
    int Arr[NoOfElements],max=1;
    for(int i=0;i<NoOfElements;i++)
    {
        scanf("%d",&Arr[i]);
        if(i==0||Arr[i]>max){max=Arr[i];}
    }
    int ResultantArr[100000]={0};
    for(int i=0;i<NoOfElements;i++)
    {ResultantArr[Arr[i]]++;}
    for(int i=0;i<100000;i++)
    {if(ResultantArr[i]>0){printf("Frequency of %d is %d \n",i,ResultantArr[i]);}}
    return 0;
}