#include<stdio.h>
int CmpString(char c1[],char c2[])
{
    static int i=0,flag=0;
    if(c1[i]=='\0'&&c2[i]!='\0'){return 2;}
    if(c2[i]=='\0'&&c1[i]!='\0'){return 1;}
    if(c1[i]=='\0'&&c2[i]=='\0'){return 0;}
    if((int)c1[i]>(int)c2[i]){return 1;}
    if((int)c1[i]<(int)c2[i]){return 2;}
    else{return CmpString(c1,c2);}
}
int main()
{
    char c1[100],c2[100];
    scanf("%[^\n]",&c1);
    scanf("%[^\n]",&c2);
    int n=CmpString(tolower(c1),tolower(c2));
    // printf("%d",LenOfString(c));
    return 0;
}