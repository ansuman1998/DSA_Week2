#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,lowcount=0,highcount=0;
    scanf("%d", &n);
    int *a =(int *)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0&&(a[1]<a[0]))
        {
            printf("%d %d\n", a[i], i);
        }
         if(i!=0&&i!=n-1&&(a[i]>a[i+1])&&highcount==0)
        {
            highcount++;
            if(highcount==1)
                printf("%d %d\n", a[i], i);
        }
         if(i!=0&&i!=n-1&&(a[i]<a[i-1])&&lowcount<2)
        {
            lowcount++;
            if(lowcount==2)
                printf("%d %d\n", a[i], i);
        }
        if(i==n-1&&(a[n-2]>a[n-1]))
        {
            printf("%d %d\n", a[i], i);
        }

    }
}
