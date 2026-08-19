#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int id;
    int age;
}Student;

void addStudent(Student **arr,int *count, int *capacity);

void printStudent(Student *arr, int count);

void findStudent(Student *arr, int count);

void deleteStudent(Student *arr,int *count);


#endif