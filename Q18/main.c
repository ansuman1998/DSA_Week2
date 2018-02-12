#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void text_pattern(char c)
{
    switch(c)
    {
        case 'a':printf("2");break;
        case 'b':printf("22");break;
        case 'c':printf("222");break;
        case 'd':printf("3");break;
        case 'e':printf("33");break;
        case 'f':printf("333");break;
        case 'g':printf("4");break;
        case 'h':printf("44");break;
        case 'i':printf("444");break;
        case 'j':printf("5");break;
        case 'k':printf("55");break;
        case 'l':printf("555");break;
        case 'm':printf("6");break;
        case 'n':printf("66");break;
        case 'o':printf("666");break;
        case 'p':printf("7");break;
        case 'q':printf("77");break;
        case 'r':printf("777");break;
        case 's':printf("7777");break;
        case 't':printf("8");break;
        case 'u':printf("88");break;
        case 'v':printf("888");break;
        case 'w':printf("9");break;
        case 'x':printf("99");break;
        case 'y':printf("999");break;
        case 'z':printf("9999");break;
        case '0':printf("00");break;
        case '1':printf("11");break;
        case '2':printf("2222");break;
        case '3':printf("3333");break;
        case '4':printf("4444");break;
        case '5':printf("5555");break;
        case '6':printf("6666");break;
        case '7':printf("77777");break;
        case '8':printf("8888");break;
        case '9':printf("99999");break;
        case ' ':printf("0");break;

    }
}
int category(char c)
{
    switch(c)
    {
        case 'a': return 2; break;
        case 'b': return 2; break;
        case 'c': return 2; break;
        case 'd': return 3; break;
        case 'e': return 3; break;
        case 'f': return 3; break;
        case 'g': return 4; break;
        case 'h': return 4; break;
        case 'i': return 4; break;
        case 'j': return 5; break;
        case 'k': return 5; break;
        case 'l': return 5; break;
        case 'm': return 6; break;
        case 'n': return 6; break;
        case 'o': return 6; break;
        case 'p': return 7; break;
        case 'q': return 7; break;
        case 'r': return 7; break;
        case 's': return 7; break;
        case 't': return 8; break;
        case 'u': return 8; break;
        case 'v': return 8; break;
        case 'w': return 9; break;
        case 'x': return 9; break;
        case 'y': return 9; break;
        case 'z': return 9; break;
        case '0': return 0; break;
        case '1': return 1; break;
        case '2': return 2; break;
        case '3': return 3; break;
        case '4': return 4; break;
        case '5': return 5; break;
        case '6': return 6; break;
        case '7': return 7; break;
        case '8': return 8; break;
        case '9': return 9; break;
        case ' ': return 0; break;

    }
}
int main()
{
    char ch[1000];
    scanf("%[^\n]s",ch);
    int n = strlen(ch);
    int i;
    text_pattern(ch[0]);
    for(i=1;i<n;i++)
    {   if(category(ch[i-1])==category(ch[i])) printf(" ");
        text_pattern(ch[i]);
    }
}
