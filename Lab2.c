#include<stdio.h>
int main()
{
    char input[100];
    gets(input);
    int i=0,len;
    len=strlen(input);
    for(i=0; i<=len; i++)
        {
            if(input[i] == 34 || input[i]== 39)
            {
                if(input[i-1]!=32)
                {
                    printf("\n");
    }
    while(1)
        {
            if(input[i+1] == 34 || input[i+1] == 39)
                {
                    if(input[i+2]!=32)
                    {
                        printf("\n");
                    }
    break;
                }
                else
                    {
                        i++;
                        printf("%c",input[i]);

                   }
                }
                i++;
        }
        else if(input[i]== 32)
            {
                while(input[i+1]==32)
                {
                    i++;
        }
        printf("\n");
        }
        else if(input[i]==47)
            {
                if(input[i+1]==47)
            {
                break;
            }
        else if(input[i+1]==42)
            {
                i++;
                while(input[i+1]!=47)
                    {
                        i++;
                }
            }
            }
             else
                {
                    printf("%c",input[i]);
             }
    }
}

