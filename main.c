#include"student.h"
#include<stdio.h>
#include<stdlib.h>
// Day10 git test
// git test
int main() {
    int count = 0;
    //Student arr[100];
    int choice;
    int capacity = 2;

    Student *arr = (Student *)malloc((capacity * sizeof(Student)));

    while(1) {
        printf("1. 添加学生\n");
        printf("2. 打印学生\n");
        printf("3. 查找学生\n");
        printf("4. 删除学生\n");
        printf("0. 退出程序\n");
        printf("请选择：");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("你选择了输入学生信息\n");
                addStudent(&arr, &count,&capacity);
                break;
            case 2:
                printf("你选择了打印学生信息\n");
                printStudent(arr, count);
                break;
            case 3:
                printf("你选择了查找学生\n");
                findStudent(arr, count);
                break;
            case 4:
                printf("你选择了删除学生\n");
                deleteStudent(arr,&count);
                break;
            case 0:
                free(arr);
                return 0;        
            default:
                printf("输入错误\n");
        }
    }

    return 0;
}