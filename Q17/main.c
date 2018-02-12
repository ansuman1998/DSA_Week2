#include <stdio.h>
#include <stdlib.h>

void print(int *arr, int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ", arr[i]);
    //printf("\n");
}

void fillrow(int *row, int index, int size, int choose, int i)
{
    if(index==choose)
        {
        //print(row,choose);
        //printf("\n");
        int *columnlist = (int *)malloc(choose*sizeof(int));
        fillcolumn(columnlist,0,size,choose,-1,row);
        return;
        }

    int j;
    for(j=i+1;j<size;j++)
    {
        row[index]=j;
        fillrow(row,index+1,size,choose,j);


    }

    return;

}
int max, sum=0;
int **a;
void fillcolumn(int *c, int index, int size, int choose, int i, int *row)
{
    if(index==choose)
        {
            print(row,choose);
            printf("||| ");
            print(c,choose);
            printf("\n");




            int k,l, tempdiff=0, tempsum=0;
            for(k=0;k<choose;k++)
                for(l=0;l<size;l++)
            {
                tempsum+=a[row[k]][l];
            }
            ////////////////////////////////////////////
            for(l=0;l<choose;l++)
                for(k=0;k<size;k++)
            {
                tempsum+=a[k][c[l]];
            }
            /////////////////////////////////////////////
            tempdiff=0;
            for(k=0;k<choose;k++)
                for(l=0;l<choose;l++)
                {
                    tempdiff+=a[row[k]][c[l]];
                }
            /////////////////////////////////////////////
            tempsum= tempsum - tempdiff;
            /////////////////////////////////////////////
            printf("TEMPSUM IS %d AND SUMT IS %d\n", tempsum, sum-tempsum);
             printf("\n");

            if((sum-tempsum)>max)
                max=sum-tempsum;

            return;

        }

    int j;
    for(j=i+1;j<size;j++)
    {
        c[index]=j;
        fillcolumn(c,index+1,size,choose,j,row);

    }

    return;
}
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    a= (int **)malloc(n*sizeof(int *));
    for(i=0;i<n;i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));
    }

   for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
            sum+=a[i][j];
        }
    max = sum;

    for(m=1;m<n;m++)
    {
        int *rowlist = (int *)malloc(m*sizeof(int));
        printf("Value of M is %d\n", m);
        fillrow(rowlist,0,n,m,-1);
        printf("This is M = %d ending\n", m);

    }

  printf("%d\n", max);





}
