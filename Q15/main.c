#include <stdio.h>
#include <stdlib.h>
long long int extract(long long int n, int count)
{
    long long int temp=n,sum=0;
    int tempcount=0;
    while(temp!=0)
    {
        tempcount++;
        temp/=10;
    }
    int *a= (int *)malloc(tempcount*sizeof(int));
    int i;
    temp=n;
    for(i=tempcount-1;i>=0;i--)
    {
        a[i]=temp%10;
        temp/=10;
    }

    for(i=0;i<count;i++)
        {printf("%d",a[(tempcount-count)/2+i]);
        sum = sum*10+a[(tempcount-count)/2+i];}
    printf("\n");
    return sum;

}
int main()
{
   long long int n,k,m,temp;
   scanf("%lld %lld", &n, &k);
   m=n;
   int count=0;
   while(m!=0)
   {
       count++;
       m/=10;
   }
   m=n;
   while(k!=0)
   {
       temp=m*m;
       m=extract(temp,count);
       k--;
   }
}
