#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fp;
    fp = fopen("Input.txt", "r");
    if(fp==NULL)
        printf("File couldn't be found, sorry\n");

    char c, next;
    c = fgetc(fp);
    next = fgetc(fp);

    while(c!=EOF)
    {
        if(c=='/'&&next=='/')
        {
            while(c!='\n')
            {
                c=next;
                next=fgetc(fp);
            }
            //Here c is newline and next is the character following it
            //We will print the newline, not a problem

        }

        else if(c=='/'&&next=='*')
        {
            while(!(c=='*'&&next=='/'))
            {
                c=next;
                next=fgetc(fp);
            }
            //Here c and next point at the ending characters of comment
            next = fgetc(fp);
            c = next;
            next = fgetc(fp);
            // here c and next point at the next two characters
        }

        else
        {
            printf("%c",c);
            c= next;
            next = fgetc(fp);
        }

    }


}
