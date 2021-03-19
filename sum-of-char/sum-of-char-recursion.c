/** Program to find sum of charactor(in a string) using recursion***/
#include <stdio.h>
#include <string.h>

char str[] = "abcd";
int len;
int sum = 0, j,i = 0;

int func(char *str)
{
   
   
    // printf("%s %d\n", str, len);
    
   for(i=0; str[i]!= '\0'; i++)
   {
        sum += str[0];
        //j+= 1;
        func(&str[++i]);
       // i++;
        printf("Inside - %s\n", str);
       
   }
  printf("%d\n", sum);
   return sum;
   

    
}



int main()
{
    int final= 0;
   // printf("Hello World");
    len = strlen(str);
    final = func(str);
    printf("%d\n", final);
    return 0;
}

