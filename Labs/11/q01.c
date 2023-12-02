/*
* Programmer: Muhammad Umar
* Date: 21/11/2023
* Description: Create a structure to specify data on students. Print names of all students who joined in a particular year. Print the data of a student whose roll number is given.
*/

#include <stdio.h>

//declaring a struct of student
typedef struct Student {
    int rollNo;
    char name[30];
    char department[20];
    char course[30];
    int year;
} Student;

void main(){
    
    int totalStudents;
    
    //taking total no. of students from user
    do{
        printf("Enter the total no. of students : ");
        scanf("%d", &totalStudents);
    } while(totalStudents > 450);
    
    Student allStudents[totalStudents];
    
    //taking the data of all students from user
    for(int i = 0; i < totalStudents; i++){
        printf("\nEnter data of student %d\n", i+1);
        printf("Enter roll no. of student %d : ", i+1);
        scanf("%d", &allStudents[i].rollNo);
        printf("Enter name of student %d : ", i+1);
        scanf(" %[^\n]", allStudents[i].name);
        printf("Enter department of student %d : ", i+1);
        scanf(" %[^\n]", allStudents[i].department);
        printf("Enter course of student %d : ", i+1);
        scanf(" %[^\n]", allStudents[i].course);
        printf("Enter joining year of student %d : ", i+1);
        scanf("%d", &allStudents[i].year);
    }
    
    int partYear, partRollno;
    
    printf("\nEnter the particular year for which you want to find the names of all students : "); //taking particular year from user
    scanf("%d", &partYear);
    
    //comparing the particular year from all years present in the data and printing the name of students if particular year = the year in the data
    for(int i = 0; i < totalStudents; i++){
        if(partYear == allStudents[i].year){
            printf("\n%s", allStudents[i].name);
        }
    }
    
    printf("\n\nEnter the particular roll no. of the student for whom you want to find the data : "); //taking particular roll no. from user
    scanf("%d", &partRollno);
    
    //comparing the particular roll no. from all roll no.s present in the data and printing the data of the student if particular roll no. = the roll no. in the data
    for(int i = 0; i < totalStudents; i++){
        if(partRollno == allStudents[i].rollNo){
            printf("\nName of student : %s\nDepartment of student : %s\nCourse of student : %s\nJoining year of student : %d\n", allStudents[i].name, allStudents[i].department, allStudents[i].course, allStudents[i].year);
            break;
        }
    }
} //end main
