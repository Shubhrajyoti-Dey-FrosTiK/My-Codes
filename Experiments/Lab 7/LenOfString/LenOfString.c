#include<stdio.h>
int LenOfString(char c[])
{
    static int i=0;
    if(c[i]=='\0'){return i;}
    else{i++; return LenOfString(c);}
}
int main()
{
    char c[100];
    scanf("%[^\n]",&c);
    printf("%d",LenOfString(c));
    return 0;
}