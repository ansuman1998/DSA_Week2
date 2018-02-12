#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,tot=0,count,i;
    scanf("%ld", &n);

    for(i=2;i<=sqrt(n);i++)
    {
        count=0;
        while(n%i==0)
        {
            count++;
            n/=i;
        }
        tot+=count;
    }
    if(n!=1) tot++;
    printf("%d\n", tot);
}
