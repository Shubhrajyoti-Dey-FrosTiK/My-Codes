#include<stdio.h>
int main()
{
    int CountOdd=0,CountEven=0,NoOfElements;
    printf("Enter the number of elements in the array");
    scanf("%d",&NoOfElements);
    int Arr[NoOfElements],Odd[NoOfElements],Even[NoOfElements];
    for(int i=0;i<NoOfElements;i++)
    {scanf("%d",&Arr[i]); if(Arr[i]%2!=0){Odd[CountOdd]=Arr[i];CountOdd++;}else{Even[CountEven]=Arr[i]; CountEven++;}}
    for(int i=0;i<CountEven;i++)
    {printf("%d ",Even[i]);}
    printf("\n");
    for(int i=0;i<CountOdd;i++)
    {printf("%d ",Odd[i]);}
    return 0;
}