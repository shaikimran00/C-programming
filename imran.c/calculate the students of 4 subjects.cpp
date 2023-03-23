#include <stdio.h>
int main()
{
    float eng, phy, chem, comp; 
    float total, average, percentage;
 
    printf("Enter marks of four subjects: :- ");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &comp);
 
    total = eng + phy + chem + comp;
    average = total / 4.0;
    percentage = (total / 400.0) * 100;
 
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);
 
    return 0;
}
