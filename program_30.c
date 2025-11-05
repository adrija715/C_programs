/*WAPC to do the following:
a. Input: height (m), weight (kg).
b. Calculate BMI = weight / (height²).
c. Classify:
i. BMI < 18.5 ? Underweight
ii. 18.5 = BMI < 25 ? Normal
iii. 25 = BMI < 30 ? Overweight
iv. = 30 ? Obese
d. If overweight or obese and age > 40 ? print "Consult doctor".*/
#include <stdio.h>
int main()
 {
   float height, weight, bmi;
    int age;
    printf("Enter your height (in meters): ");
    scanf("%f", &height);
    printf("Enter your weight (in kilograms): ");
    scanf("%f", &weight);
    printf("Enter your age: ");
    scanf("%d", &age);
    bmi = weight / (height * height);
    printf("Your BMI = %.2f\n", bmi);
    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi < 25)
        printf("Category: Normal\n");
    else if (bmi < 30) 
	{
        printf("Category: Overweight\n");
        if (age > 40)
            printf("Consult doctor.\n");
    } 
    else
    {
        printf("Category: Obese\n");
        if (age > 40)
            printf("Consult doctor.\n");
    }
     return 0;
}
