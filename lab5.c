#include<stdio.h>
int main()
{
    char input[100];
    gets(input);
    int i=0,len,check=0;
    len=strlen(input);
    for (i=0;i<=len;i++){
            if (input[i]==34){
                printf("This is a string\n");
                check=check+1;
                break;

        }
        else if (input[i]==34){
                printf("This is a string\n");
                check=check+1;
                break;
        }
    }
      if(check==0){
            printf("This is not string\n");
        }
  }
