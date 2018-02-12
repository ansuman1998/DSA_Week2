#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    if(k>n)
    {
        printf("NOT POSSIBLE\n");
        return;
    }

    int *high= (int *)malloc(n*sizeof(int));
    int *low = (int *)malloc(n*sizeof(int));

    int repeat = n-k+1;
    int i;
    for(i=0;i<=repeat-1;i++)
        high[i]=9;
    for(i=repeat;i<n;i++)
        high[i]=(9+repeat-i-1);
    low[0]=1;
    for(i=1;i<=repeat;i++)
        low[i]=0;
    for(i=repeat+1;i<n;i++)
        low[i]=(i+1-repeat);
    for(i=0;i<n;i++)
        printf("%d",low[i]);
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d", high[i]);
    printf("\n");

}
