#include<stdio.h>
int main()
{ float a;
 int  member_ship;
printf("\n enter order amount:");
scanf("%f",&a);
printf("\n enter member ship type");
scanf("%d",&member_ship);
if (a<500)
   printf("\nThe payable amount is %f",a+50);
else  {  if ( member_ship==1 )
       printf("the payable amount is %f",a-a/10);
       else 
       printf("the payable amount is %f",a);}
 }