#include"student.h"
#include<stdio.h>
#include<stdlib.h>

void addStudent(Student **arr,int *count, int *capacity) {
    printf("请输入id和age:");
    if(*count >= *capacity) {
        (*capacity) *= 2;
        Student *tmp = realloc(*arr,(*capacity)*sizeof(Student));
        if(tmp == NULL){
            return;}
        *arr = tmp;
    }
    scanf("%d %d", &(*arr)[*count].id, &(*arr)[*count].age);
    (*count)++;
}

void printStudent(Student *arr, int count) {
    for(int i = 0; i < count; i++) {
        printf("id=%d, age=%d\n", arr[i].id, arr[i].age);
    }

}

void findStudent(Student *arr, int count) {
    int id;
    printf("请输入要查找的id:");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(arr[i].id == id) {
            printf("找到id=%d, age=%d\n", arr[i].id, arr[i].age);
            return;
        }
    }

    printf("没找到\n");
}

void deleteStudent(Student *arr,int *count){
    printf("请输入要删除的学生id:");
    int std;//需要被删除的学生id;
    scanf("%d",&std);
    for(int i = 0; i < *count; i++) {
        if(arr[i].id == std) {
            for(int j=i;j<*count-1;j++){
                arr[j].id=arr[j+1].id;
                arr[j].age=arr[j+1].age;
            }
            (*count)--;
            return;
        }
    }
    printf("没找到\n");
}
