#include<stdio.h>
#include<math.h>
int main(){
    unsigned long long int lowest,highest,num,n,a,sum,g;
    n=0;
    sum=0;
    printf("enter 2 numbers between which you want to find armstrong numbers\n");
    scanf("%llu %llu",&lowest,&highest);
    printf("the list of armstrong numbers between %llu and %llu including both of them are as follows\n",lowest,highest);
    for ( num = lowest; num < highest; num=num+1)
    {
        g=num;
        while (num!=0)
        {
            num=num/10;
            n=n+1;
        }
        num=g;
        printf("%llu",n);
        while(num!=0)
        {
            a=num%10;
            num=num/10;
            sum=sum+pow(a,n);
        }
        //printf("%llu ",sum);
        num=g;
        if (sum==num)
        {
            printf("%llu ",num);
        }
    }
    
    

}