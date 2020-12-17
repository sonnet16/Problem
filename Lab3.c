#include<stdio.h>
int main()
{
    char input[100];
    int check=0,i=0,len;
    gets(input);
    len=strlen(input);
    for(i=0; i<=len; i++)
        {
            if(input[i]==47)
            {
                if(input[i+1]==47)
                {
                    printf("It is a comment\n");
                    check=1;
                    break;
                    }
                    else if(input[i+1]==42)
                        {
                            printf("It is a comment\n");
                            check=1;
                            break;
                            }
                    }
            }
        if(check==0)
        {
            printf("Not a Comment\n");
        }
    }

