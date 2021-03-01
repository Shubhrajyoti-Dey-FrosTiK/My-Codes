#include<stdio.h>
int main()
{
    int LeftVal=0,RightVal=1;
    printf("0 1 ");
    for(int i=0;i<8;i++)
    {printf("%d ",LeftVal+RightVal); int temp=LeftVal; LeftVal=RightVal; RightVal=temp+LeftVal;}
    return 0;
}