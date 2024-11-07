#include <stdio.h>

int main() {
    char studentName[50];
    float marks1, marks2, marks3;

    printf("Enter student name: ");
    scanf("%s", &studentName);

    printf("Enter English marks: ");
    scanf("%f", &marks1);

    printf("Enter Maths marks: ");
    scanf("%f", &marks2);

    printf("Enter Physics marks: ");
    scanf("%f", &marks3);
    
printf("=============================\n");
    printf("Welcome %s, \n\tYour English score:%f, \n\tYour Math score: %f \n\tYour Physics score: %f", studentName, marks1, marks2, marks3);

    printf("\nFinal average Marks : %.2f", (marks1 + marks2 + marks3) / 3.0);
    return 0;
}
