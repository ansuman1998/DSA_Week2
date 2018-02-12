#include <stdio.h>
#include <stdlib.h>
char* convert(int x)
{
    switch(x)
    {
        case 1: return "One"; break;
        case 2: return "Two"; break;
        case 3: return "Three"; break;
        case 4: return "Four"; break;
        case 5: return "Five"; break;
        case 6: return "Six"; break;
        case 7: return "Seven"; break;
        case 8: return "Eight"; break;
        case 9: return "Nine"; break;
        case 0: return ""; break;
    }
}

char* converten(int x)
{
    switch(x)
    {
        case 1: return "One"; break;
        case 2: return "Twenty"; break;
        case 3: return "Thirty"; break;
        case 4: return "Forty"; break;
        case 5: return "Fifty"; break;
        case 6: return "Sixty"; break;
        case 7: return "Seventy"; break;
        case 8: return "Eighty"; break;
        case 9: return "Ninety"; break;
        case 0: return ""; break;
    }
}


char* func(int x)
{
    switch(x)
    {
        case 11: return "Eleven"; break;
        case 12: return "Twelve"; break;
        case 13: return "Thirteen"; break;
        case 14: return "Fourteen"; break;
        case 15: return "Fifteen"; break;
        case 16: return "Sixteen"; break;
        case 17: return "Seventeen"; break;
        case 18: return "Eighteen"; break;
        case 19: return "Nineteen"; break;
        case 10: return "Ten"; break;
    }
}


void units(int n)
{
    printf("%s\n",convert(n));
}

void tens(int n)
{
    if(n>20)
    {
        printf("%s ",converten(n/10));
        printf("%s\n",convert(n%10));
    }

    if(n<20)
    {
        printf("%s", func(n));
    }
}

void hundreds(int n)
{
    printf("%s Hundred ",convert(n/100));
    if((n-(n/100)*100)>=20)
       {
           printf("%s ",converten(n/10-(n/100)*10));
           printf("%s\n",convert(n%10));
       }
    else if((n-(n/100)*100)<20)
            printf("%s\n", func((n-(n/100)*100)));

}

void thousands(int n)
{
    printf("%s Thousand ",convert(n/1000));
    printf("%s Hundred ",convert(n/100-(n/1000)*10));
    if((n-(n/100)*100)>=20)
       {
           printf("%s ",converten(n/10-(n/100)*10));
           printf("%s\n",convert(n%10));
       }
    else if((n-(n/100)*100)<20)
            printf("%s\n", func((n-(n/100)*100)));
}

int main()
{
    int n;
    scanf("%d",&n);

    if(n>=0 && n<10)
        units(n);
    else if(n>=10 && n<100)
        tens(n);
    else if(n>=100 && n<1000)
        hundreds(n);
    else if(n>=1000&&n<10000)
        thousands(n);
}
