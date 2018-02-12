#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8][8];
    int i,j,k;
    for(i=0;i<8;i++)
        for(j=0;j<8;j++)
        scanf("%d", &a[i][j]);
    int sum=0;
    for(i=0;i<8;i++)
    {
        sum=0;
        for(j=0;j<8;j++)
        {
            sum+=a[i][j];
            if(sum>1)
                {
                    printf("NO\n");
                    return;
                }
        }

    }

    for(j=0;j<8;j++)
    {
        sum=0;
        for(i=0;i<8;i++)
        {
            sum+=a[i][j];
            if(sum>1)
            {
                printf("NO\n");
                return;
            }
        }
    }


    for(i=0;i<8;i++)
    {   k=i;
        j=0;
        sum=0;
        while(j!=8&&k!=8)
        {
            sum+=a[k][j];
            if(sum>1)
            {
                printf("NO\n");
                return;
            }
            k++;
            j++;
        }
    }

     for(i=0;i<8;i++)
    {   k=i;
        j=0;
        sum=0;
        while(j!=8&&k!=-1)
        {
            sum+=a[k][j];
            if(sum>1)
            {
                printf("NO\n");
                return;
            }
            k--;
            j++;
        }
    }

     for(i=0;i<8;i++)
    {   k=i;
        j=7;
        sum=0;
        while(j!=-1&&k!=8)
        {
            sum+=a[k][j];
            if(sum>1)
            {
                printf("NO\n");
                return;
            }
            k++;
            j--;
        }
    }

     for(i=0;i<8;i++)
    {   k=i;
        j=7;
        sum=0;
        while(j!=-1&&k!=-1)
        {
            sum+=a[k][j];
            if(sum>1)
            {
                printf("NO\n");
                return;
            }
            k--;
            j--;
        }
    }

    printf("YES\n");

}
