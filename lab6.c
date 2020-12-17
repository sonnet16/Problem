#include<stdio.h>
int main()
{
    char input[100];
    int len,check=0,i;
    gets(input);
    len=strlen(input);
    printf("Number ");
    for(i=0;i<=len;i++){
            if((input[i]>=48) && (input[i]<=57)){
                printf("%c",input[i]);
        }
    }
    printf("\nOperators ");
    for(i=0;i<=len;i++){
            if((input[i]==42)||(input[i]==43)||(input[i]==45)||(input[i]==47)){
                printf("%c",input[i]);
        }
    }
    printf("\nIdentifier ");
    for(i=0;i<=len;i++){
            if((input[i]>=65 && input[i]<=90)||(input[i]>=97 && input[i]<=122)){
                printf("%c",input[i]);
        }

    else if(input[i]==59){
            check=1;
          }
      }
      if(check==1){
            printf("\nEnd of sentence ;");
      }
    return 0;
}



