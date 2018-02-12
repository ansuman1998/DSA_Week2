#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void soundex(char *w, char *neww)
{
   int n = strlen(w),temp;

    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(w[i]>=97 && w[i]<=122)
        {
            w[i]-=32;
        }
    }
   // printf("%s\n", w);
    for(i=0;i<n;i++)
    {
        if(w[i]=='D'&&w[i+1]=='G'&&(i+1)<n)
            {neww[j++]='G'; i=i+1;}
        else if(w[i]=='G'&&w[i+1]=='H'&&i!=0&&(i+1)<n)
            {neww[j++]='H'; i=i+1;}
        else if(w[i]=='G'&&w[i+1]=='N'&&(i+1)<n)
            {neww[j++]='N'; i=i+1;}
        else if(w[i]=='K'&&w[i+1]=='N'&&(i+1)<n)
            {neww[j++]='N'; i=i+1;}
        else if(w[i]=='P'&&w[i+1]=='H'&&(i+1)<n)
            {neww[j++]='F'; i=i+1;}
        else if(w[i]=='M'&&w[i+1]=='P'&&(w[i+2]=='S'||w[i+2]=='Z'||w[i+2]=='T')&&(i+1)<n&&(i+2)<n)
            {neww[j++]='M'; i=i+2;}
        else if(w[i]=='P'&&w[i+1]=='S'&&(i+1)<n&&i==0)
            {neww[j++]='S'; i=i+1;}
        else if(w[i]=='P'&&w[i+1]=='F'&&(i+1)<n&&i==0)
            {neww[j++]='F'; i=i+1;}
        else if(w[i]=='M'&&w[i+1]=='B'&&(i+1)<n)
            {neww[j++]='M'; i=i+1;}
        else if(w[i]=='T'&&w[i+1]=='C'&&w[i+2]=='H'&&(i+1)<n&&(i+2)<n)
            {neww[j++]='C'; neww[j++]='H'; i=i+2;}
        else
             neww[j++]=w[i];
    }
    neww[j++]='\0';
   // printf("%s\n", neww);

    int m=strlen(neww);
    //printf("%d\n",m);
    for(i=1;i<m;i++)
    {
        if(neww[i]=='A'||neww[i]=='E'||neww[i]=='I'||neww[i]=='O'||neww[i]=='U'||neww[i]=='H'||neww[i]=='W'||neww[i]=='Y')
            neww[i]='0';
        else if(neww[i]=='C'||neww[i]=='G'||neww[i]=='J'||neww[i]=='K'||neww[i]=='Q'||neww[i]=='S'||neww[i]=='X'||neww[i]=='Z')
            neww[i]='2';
        else if(neww[i]=='B'||neww[i]=='F'||neww[i]=='P'||neww[i]=='V')
            neww[i]='1';
        else if(neww[i]=='D'||neww[i]=='T')
            neww[i]='3';
        else if(neww[i]=='L')
            neww[i]='4';
        else if(neww[i]=='M'||neww[i]=='N')
            neww[i]='5';
        else if(neww[i]=='R')
            neww[i]='6';
    }

   // printf("%s\n", neww);
   if(strlen(neww)>=4)
        {for(i=0;i<4;i++)
        printf("%c",neww[i]);
        neww[4]='\0';
        printf("\n");}
    else
        {
            //printf("%d\n", strlen(neww));
            temp=strlen(neww);
            for(i=1;i<=4-temp;i++)
            {
                strcat(neww,"0");
                //printf("%d\n", i);
            }
       printf("%s\n", neww);
        }

}

void extract(char sent[1000], char neww[100])
{
    int n= strlen(sent),i,j=0, flag=0;
    char word[100], newword[100];
    for(i=0;i<n;i++)
    {   j=0;
        while(isalpha(sent[i]))
        {
            word[j++]=sent[i++];
        }
        word[j++]='\0';

        printf("%s\n", word);
        soundex(word,newword);

        if(strcmp(neww,newword)==0)
            flag=1;

    }

    if(flag==1)
        printf("%s\n", sent);
}
int main()
{
    char w[100], neww[100], filename[100];
    int i,temp;
    scanf("%s", w);
    scanf(" %s",filename);
    soundex(w,neww);

    char line[1000],read[1000];
    FILE *fp;

    fp= fopen(filename,"r");
    while(fgets(line,1000,fp))
    {
        printf("%s\n",line);
        extract(line,neww);
    }






}
