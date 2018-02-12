#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void convert(int c, int n)
{
    if(c==0)
    {
        if(n==1)
            printf(" ");
        else if(n==2)
            printf("0");
    }
    else if(c==1)
    {
        if(n==2)
            printf("1");
    }

    else if(c==2)
    {
        if(n==1)
            printf("a");
        else if(n==2)
            printf("b");
        else if(n==3)
            printf("c");
        else if(n==4)
            printf("2");
    }

    else if(c==3)
    {
        if(n==1)
            printf("d");
        else if(n==2)
            printf("e");
        else if(n==3)
            printf("f");
        else if(n==4)
            printf("3");
    }


    else if(c==4)
    {
        if(n==1)
            printf("g");
        else if(n==2)
            printf("h");
        else if(n==3)
            printf("i");
        else if(n==4)
            printf("4");
    }

    else if(c==5)
    {
        if(n==1)
            printf("j");
        else if(n==2)
            printf("k");
        else if(n==3)
            printf("l");
        else if(n==4)
            printf("5");
    }

    else if(c==6)
    {
        if(n==1)
            printf("m");
        else if(n==2)
            printf("n");
        else if(n==3)
            printf("o");
        else if(n==4)
            printf("6");
    }

    else if(c==7)
    {
        if(n==1)
            printf("p");
        else if(n==2)
            printf("q");
        else if(n==3)
            printf("r");
        else if(n==4)
            printf("s");
        else if(n==5)
            printf("7");
    }


    else if(c==8)
    {
        if(n==1)
            printf("t");
        else if(n==2)
            printf("u");
        else if(n==3)
            printf("v");
        else if(n==4)
            printf("8");
    }

    else if(c==9)
    {
        if(n==1)
            printf("w");
        else if(n==2)
            printf("x");
        else if(n==3)
            printf("y");
        else if(n==4)
            printf("z");
        else if(n==4)
            printf("9");
    }





}
int main()
{
    char ch[1000];
    scanf("%[^\n]",ch);

    int n=strlen(ch);
    int i,j,count;
    for(i=0;i<n;)
    {
        count=0;
        j=i;
        while(ch[j]==ch[i])
            {
                count++;
                j++;
            }

        //printf("%d %d\n",ch[i]-48,count);
        convert(ch[i]-48,count);
        i+=count;
        //convert(ch[i]-48,count);
    }

}
