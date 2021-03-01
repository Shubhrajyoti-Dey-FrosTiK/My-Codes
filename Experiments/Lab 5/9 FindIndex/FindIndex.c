#include<stdio.h>
int main()
{
    int NoOfElements;
    printf("Enter the number of elements ");
    scanf("%d",&NoOfElements);
    int Arr[NoOfElements],ReqNum;
    for(int i=0;i<NoOfElements;i++)
    {scanf("%d",&Arr[i]);}
    printf("Enter the number whose index you want to find");
    scanf("%d",&ReqNum);
    for(int i=0;i<NoOfElements;i++)
    {if(Arr[i]==ReqNum){printf("The number is in index %d",i); break;}}
    return 0;
}