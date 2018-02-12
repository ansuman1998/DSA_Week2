#include <stdio.h>
#include <stdlib.h>

int count=1;

void print(int **a, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    int **a = (int **)malloc(n*sizeof(int *));
    int i,j;
    for(i=0;i<n;i++)
        a[i]=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=-1;
    i=0;j=0;

    while(count<=(n*n))
    {
        while(j<n&&a[i][j]==-1&&count<=(n*n))
            {a[i][j++]=count++; print(a,n);}
        j--;
        i++;
        while(i<n&&a[i][j]==-1&&count<=(n*n))
            {   //printf("%dYELLO%d\n", i, j);
                a[i++][j]=count++; print(a,n);}

        printf("Loop terminated\n");
        i--;
        j--;

        while(j>-1&&a[i][j]==-1&&count<=(n*n))
            {a[i][j--]=count++; print(a,n);}
        j++;
        i--;
        while(i>-1&&a[i][j]==-1&&count<=(n*n))
            {a[i--][j]=count++; print(a,n);}
        i++;
        j++;
    }

    print(a,n);

}
