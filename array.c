 #include <stdio.h>
 struct student {
    char name[20];
    int age;
    float gpa;
    };
 int main(){
    struct student students[2] = {
        {"Yagyesh", 18, 9.1},
        {"Nitish", 21, 8.9}
    };

    for (int i = 0; i < 2; i++){
        printf("student %d\n" , i+1);
        printf("name: %s\n" , students[i].name);
        printf("age: %d\n" , students[i].age);
        printf("CGPA:%f\n" , students[i].gpa);
        printf("\n");
        printf("\n");
    }

    return 0;
 }
