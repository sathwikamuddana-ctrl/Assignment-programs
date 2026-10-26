#include<stdio.h>
int main()
{ int user_ID;
 int  password;
printf("\n enter user ID,password :");
scanf("\n%d",&user_ID,&password);
if (user_ID!=101)
   printf("\nUser not found");
else   {if (password != 4321)
      {printf("\nIncorrect password");}
       else  
          {  printf("\nLogin successful");}
             }}