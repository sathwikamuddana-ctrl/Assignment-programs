#include<stdio.h>
int main()
{ int age;
 int  monthly_income;
 int credit_score;
printf("\n enter age,monthly income,credit score:");
scanf("%d%d%d",&age,&monthly_income,&credit_score);
if (age<21||age>60)
   printf("\nLoan rejected: age not in 21 to 60");
else   if (monthly_income <25000)
       printf("\nLoan rejected: income below ₹25,000");
       else  if (credit_score <700)
             printf("\nLoan rejected: credit score below 700");
             else 
             printf("\nLoan approved");}