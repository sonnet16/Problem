#include<stdio.h>
int main ()
{
    char input[100];
    gets(input);
    int i=0,len,check=0;
    len=strlen(input);
    for (i=0;i<=len;i++){
         if ((input[i]>=48) && (input[i]<=57 )){
                printf("Digit error\n");
                break;
            }
        }
        for (i=0;i<=len;i++){
                if (input[i+1]==32){
                    printf("Space error\n");
                    break;
                    }
                }
                for (i=0;i<=len;i++){
                        if (input[i+1]==36){
                            printf("Dolar error\n");
                            break;
                        }
                         else if (input[i]==95){
                                check=1;
                         }
                    }
            if(check==1){
                    printf("Valid identifier");
            }
        return 0;
    }


