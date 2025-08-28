#include <stdio.h>


struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];  

   
    printf("Enter details of 3 students:\n");
    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);   // name without spaces
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

   
    printf("\n--- Student Details ---\n");
    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name : %s\n", s[i].name);
        printf("Roll : %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
