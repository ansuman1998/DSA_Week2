#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char pt[1000],rt[1000],ct[1000];
    int i,j=0,n;
    scanf("%[^\n]s", pt);
    for(i=0;i<strlen(pt);i++)
    {
        if(pt[i]!=' ')
        {
            rt[j++]=pt[i];
        }
    }
    rt[j]='\0';
    printf("%s\n",rt);
    scanf("%d", &n);
    if(n>strlen(rt))
    {
        printf("NOT POSSIBLE\n");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=i;j<strlen(rt);j+=n)
            printf("%c",rt[j]);
        }
    }




}
