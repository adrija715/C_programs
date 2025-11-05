//With the help of 4 user-defined functions, design a basic calculator capable of addition, subtraction, multiplication and division.
#include <stdio.h>
float add(float a, float b)
 { 
 return a + b; 
 }
float subtract(float a, float b)
 {
 return a - b; 
 }
float multiply(float a, float b)
 { 
 return a * b;  
 }
float divide(float a, float b)
 { 
return a / b;
 }
int main() 
 {
    float a, b;
    int choice;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice)
	 {
        case 1: printf("Result = %.2f", add(a,b)); break;
        case 2: printf("Result = %.2f", subtract(a,b)); break;
        case 3: printf("Result = %.2f", multiply(a,b)); break;
        case 4: 
            if(b != 0)
                printf("Result = %.2f", divide(a,b));
            else
                printf("Error: Division by zero!");
            break;
        default: printf("Invalid choice");
    }
    return 0;
 }
