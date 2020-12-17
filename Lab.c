#include<stdio.h>
int main()
{
  char input[100];
  printf("e:Enter a Sentence\n");
  gets(input);
  printf("\n OUTPUT:\n");
  int len,i=0;
  len = strlen(input);
  for(i=0; i<=len; i++)
    {
     if(input[i]== 32)
    {
        printf("\n");
        if(input[i+1]==32)
        {
            i++;
        }
        }
     else if(input[i]==47)
        {
            if(input[i+1]==47){
                break;
     }
      else if(input[i+1]==42)
    {
i++;
     if(input[i+1]!=47)
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

