#include <stdio.h>
  
struct student {
    char name[20];
    int age;
    float marks;
};
  
// function to return a structure
struct student get_student_data()
{
    struct student s;
  
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
  
    return s;
}
  
int main()
{
    // s tructure variable s1 which has been assigned the
    // returned value of get_student_data
    struct student s1 = get_student_data();
    // displaying the information
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.1f\n", s1.marks);
  
    return 0;
}
