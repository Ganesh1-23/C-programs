// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
    int big=a>b?a:b;
    int step=big;
    while(1)
    {
        if(big%2==0 && big%b==0)
        {
            printf("the lcm is %d",big);
            break;
        }
        else
        big=big+step;
    }
}
    