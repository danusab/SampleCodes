#include <stdio.h>
#include<string.h>
int main()
{
   char atm[30];
   printf("Please Enter your Pin\n");
   scanf("%s",atm);
   if (strcmp(atm,"abcd") == 0)  
   {
    printf("success");
   }
   else
   {
   printf("please enter your correct pin");
   }
   return 0;
}

