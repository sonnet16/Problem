#include<stdio.h>
int main()
{
    char input[100];
    int check=0,i=0,len;
    gets(input);
    len=strlen(input);
    for(i=0;i<=len;i++){
            if(input[i]==47){
                printf("There is a slash in the line\n");
                check=1;
                break;
                }
            }
            if(check==0){
                    printf("No slash in the line\n");
            }
}
