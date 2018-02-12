#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int expr[17];
int evaluate(int n)
{
    int j=0,lhs=0,rhs=0;
    char temp;
    //printf("INITIALLY THIS IS J %d\n",j);
        while(expr[j]!=43&&expr[j]!=45&&j<n)
        {
            lhs*=10;
            lhs+=expr[j];
            //printf("THIS IS THE FIRST LHS %d\n",lhs);
            j++;
            //printf("THIS IS J INSIDE LHS SECTION %d\n",j);

        }
        temp=(char)expr[j];

        j++;

    while(j<n)
    {
        rhs=0;

        while(expr[j]!=43&&expr[j]!=45&&j<n)
        {
            rhs=rhs*10+expr[j];
            //printf("THIS IS THE RHS %d\n",rhs);
            j++;
            //printf("THIS IS J INSIDE RHS SECTION %d\n",j);
        }

        if(temp=='+')
            lhs=lhs+rhs;
        else
            lhs=lhs-rhs;
        temp=(char)expr[j];
        j++;
        //printf("AFTER another ITERATION TOTAL IS %d\n", lhs);
    }

    return lhs;
}
void func(char *a, int index)
{
   if(index==8)
   {
       int i;
       int j=0;
       for(i=0;i<8;i++)
       {

           expr[j++]=(i+1);
           if(a[i]!=' ')
           expr[j++]=a[i];
       }
       //printf("%d",9);
       expr[j++]=9;
       //printf("%d\n",j);
       if(evaluate(j)==100)
        {
       for(i=0;i<j;i++)
       {
           if(expr[i]==43||expr[i]==45)
            printf("%c", expr[i]);
           else
           printf("%d",expr[i]);
       }
       printf("\n");
       }
       return;
   }
    a[index]='+';
    func(a,index+1);
    a[index]='-';
    func(a,index+1);
    a[index]=' ';
    func(a,index+1);
    return;
}
int main()
{
      char *a=(char *)malloc(8*sizeof(char));

      func(a,0);
}
