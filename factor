#include <stdio.h>

int main() 
{
    int c, i;
    printf("Enter a number: ");
    scanf("%d", &c); 
    
    for (i = 2; i <= c; i++)
    {
        if(c%i==0)
        {
            printf("%d ",i);
        }

    }

}
