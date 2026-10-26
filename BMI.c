#include <stdio.h>

int main() 
    {float weight, height, bmi;
     printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    printf("Your BMI is: %.2f\n", bmi = weight/(height*height));
    if (bmi < 18.5) 
        printf(" Underweight\n");
    else if (bmi >= 18.5 && bmi < 25.0) 
        printf(" Normal\n");
    else if (bmi >= 25.0 && bmi < 30.0) 
        printf("Overweight\n");
     else 
        printf("Obese\n");
    
}