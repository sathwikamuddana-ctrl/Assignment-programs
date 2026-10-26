#include<stdio.h>
int main()
{ int a;
printf("\n enter number a:");
scanf("%d",&a);
if (a>0)
 printf("positive number");
 else 
 {if (a<0)
        printf("negative number");
  else 
         printf("zero");}
   
 }