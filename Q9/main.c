#include <stdio.h>
#include <stdlib.h>

long int funpower(int a, int b)
{
    int i;
    long int prod=1;
    for(i=1;i<=b;i++)
    {
        prod*=a;
    }
    return prod;
}

long int fun(long int n, int count)

{

    printf("%ld\n", n);
    long int p= funpower(10,count-1);
    long int total=0;
    if(n==0)
        return 0;

    if(n/p>1)
        total+=funpower(3,count-1);
    if(n/p>7)
        total+=funpower(3,count-1);
    if(n/p==1||n/p==7||n/p==9)
        total+=fun(n-(n/p)*funpower(10,count-1),count-1);
    return total;
}


int main()
{
    long int n, k, total=0;
    scanf("%ld", &n);
    int count=0,i;

    k=n;
    while(k!=0)
    {
        count++;
        k/=10;
    }
     printf("%d\n", count);
     for(i=1;i<=count-1;i++)
     {
         total+=funpower(3,i);
     }
      printf("%ld\n", total);
      total += fun(n,count);
    printf("%ld\n", total);

}
