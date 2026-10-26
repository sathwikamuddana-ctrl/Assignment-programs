#include<stdio.h>
int main()
{ int m;
printf("\n enter marks:");
scanf("\n%d",&m);
   if (90<=m&&m<=100)
   printf("\nO");
   if (80<=m&&m<=89)
   printf("\nA+");
   if (70<=m&&m<=79)
   printf("\nA");
   if(60<=m&&m<=69)
   printf("\nB");
   if(50<=m&&m<=59)
   printf("\nC");
   if (m<50)
   printf("\nFail");
   if (m<0||m>100)
   printf("Invalid Mark");}