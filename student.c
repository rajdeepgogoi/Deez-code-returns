#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    int marks1, marks2, marks3;
    int total;
    float percentage;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Taking input
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Marks in Subject 1: ");
        scanf("%d", &s[i].marks1);

        printf("Marks in Subject 2: ");
        scanf("%d", &s[i].marks2);

        printf("Marks in Subject 3: ");
        scanf("%d", &s[i].marks3);

        // Calculate total and percentage
        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = s[i].total / 3.0;
    }

    // Display output
    printf("\n------Marksheet Record-------\n");

    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name        : %s\n", s[i].name);
        printf("Roll No     : %d\n", s[i].rollno);
        printf("Marks 1     : %d\n", s[i].marks1);
        printf("Marks 2     : %d\n", s[i].marks2);
        printf("Marks 3     : %d\n", s[i].marks3);
        printf("Total Marks : %d\n", s[i].total);
        printf("Percentage  : %.2f\n", s[i].percentage);
    }

    return 0;
}