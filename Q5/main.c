#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a = (int **)malloc(6*sizeof(int *));
    int i,j,count=0, temp;
    for(i=0;i<6;i++)
    {
        a[i]=(int *)malloc(6*sizeof(int));
    }

    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
        {scanf("%d", &a[i][j]); if(a[i][j]!=0)count++;}

    if(count>10)
    {
        printf("Not a sparse matrix\n"); return;
    }
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
        if(a[i][j]!=0)
    {
        printf("%d %d %d\n", i, j, a[i][j]);
    }

    for(i=0;i<6;i++)
        for(j=i;j<6;j++)
    {
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;

    }
    printf("TRANSPOSE REPRESENTATION\n");
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
        if(a[i][j]!=0)
    {
        printf("%d %d %d\n", i, j, a[i][j]);
    }

}
