#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int *a=(int *)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int lowindex, highindex, low, high, mid;
    low=0;
    high=n-1;

    printf("%d %d %d\n", low, mid, high);

    while(low<=high)
    {   mid=(low+high)/2;

        printf("%d %d %d\n", low, mid, high);
        if(a[mid]==x&&a[mid+1]>x)
            {highindex=mid; break;}
        else if(a[mid]<x||(a[mid]==x&&a[mid+1]==x))
            low=mid+1;
        else if(a[mid]>x)
            high=mid-1;
    }

    printf("%d\n",highindex);
    low = 0;
    high= n-1;
    while(low<=high)
    {   mid=(low+high)/2;
         printf("%d %d %d\n", low, mid, high);
        if(a[mid]==x&&a[mid-1]<x)
            {lowindex=mid; break;}
        else if(a[mid]<x)
            low=mid+1;
        else if(a[mid]>x||(a[mid]==x&&a[mid-1]==x))
            high=mid-1;
    }
    printf("%d\n",lowindex);


    printf("%d\n",highindex-lowindex+1);
}
