#include <stdio.h>
#include <stdlib.h>
int maxi(int a, int b, int c)
{
    if(a >=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else if(c>=a && c>=a)
        return c;

}

int mini(int a, int b, int c)
{
    if(a<=b && a<=c)
        return a;
    else if(b<=a && b<=c)
        return b;
    else if(c<=a && c<=b)
        return c;
}
int main()
{
    int *a, *b, *c, p, q, r,i,j,k, min, max;
    printf("Enter the size of the 1st array\n");
    scanf("%d", &p);
    //printf("\n");
    a= (int *)malloc(p*sizeof(int));
    printf("Enter the elements of 1st array\n");
    for(i=0;i<p;i++)
        scanf("%d",&a[i]);


    printf("Enter the size of the 2nd array\n");
    scanf("%d", &q);
    b= (int *)malloc(q*sizeof(int));
    printf("Enter the elements of 2nd array\n");
     for(i=0;i<q;i++)
        scanf("%d",&b[i]);

    printf("Enter the size of the 3rd array\n");
    scanf("%d", &r);
    c= (int *)malloc(r*sizeof(int));
    printf("Enter the elements of 3rd array\n");
     for(i=0;i<r;i++)
        {scanf("%d",&c[i]);
        }



    int diff=32000;
    i=0; j=0; k=0;
    int resi, resj, resk;

    while(i<p && j<q && k<r)
    {  printf("%d %d %d\n", i, j, k);
       max = maxi(a[i], b[j], c[k]);
       printf("max is %d\n", max);
       min = mini(a[i], b[j], c[k]);
       printf("min is %d\n", min);

       if(max-min < diff)
       {
           diff=max - min;
           resi = i; resj= j; resk= k;

       }
       if(diff==0)
        break;

        if(min==a[i])i++;
        else if(min==b[j])j++;
        else k++;

    }

    printf("%d %d %d\n", a[resi], b[resj], c[resk]);
}
