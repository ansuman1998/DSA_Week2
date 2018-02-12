#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int fun(int n)
{   int res=0;
    while(n!=0)
    {
        res+=n%10;
        n/=10;

    }
    return res;
}
int main()
{
    char ch[100];
    scanf("%s", ch);
    int n = strlen(ch),i, sum=0;
    int *a = (int *) malloc((n-1)*sizeof(int));
    for(i=0;i<=n-2;i++)
    {
        a[i]=ch[i]-48;
    }

    for(i=0;i<=n-2;i++)
        printf("%d ",a[i]);
        printf("\n");
    for(i=0;i<(n-1)/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-2-i];
        a[n-2-i]=temp;
    }


    for(i=0;i<=n-2;i++)
        printf("%d ",a[i]);
        printf("\n");

    for(i=0;i<=n-2;i++)
    {   if(i%2==0)
        {
        a[i]*=2;
        if(a[i]>=10)
            a[i]=fun(a[i]);
        }
    }

     for(i=0;i<=n-2;i++)
        {printf("%d ",a[i]); sum+=a[i];}
     if((sum+ch[n-1]-48)%10==0)
        printf("YES\n");
     else
        printf("NO\n");

}
