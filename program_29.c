/*WAPC to do the following:
a. Input: age, citizenship status (Y/N), criminal record (Y/N).
b. Eligible if: age = 18 and citizenship = Y and no criminal record.
c. If age = 60, print "Senior Citizen Eligible".
d. If not eligible, specify why.*/
#include <stdio.h>
int main()
 {
    int age;
    char citizen, criminal;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Are you a citizen? (Y/N): ");
    scanf(" %c", &citizen); 
    printf("Do you have a criminal record? (Y/N): ");
    scanf(" %c", &criminal);
    if (age >= 18 && (citizen == 'Y' || citizen == 'y') && (criminal == 'N' || criminal == 'n')) 
	{   
	    if (age >= 60)
            printf("Senior Citizen Eligible.\n");
        else
            printf("Eligible.\n");
    } else {
        printf("Not Eligible because ");
        if (age < 18)
            printf("age is below 18.\n");
        else if (citizen == 'N' || citizen == 'n')
            printf("citizenship is not valid.\n");
        else if (criminal == 'Y' || criminal == 'y')
            printf("criminal record exists.\n");
    }
    return 0;
}


