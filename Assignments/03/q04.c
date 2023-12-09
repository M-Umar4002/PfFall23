/*
* Programmer: Muhammad Umar
* Date: 09/12/2023
* Description: Displays the highest salary employees and total salaries for each department.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct worker{
    int worker_id;
    char f_name[30];
    char l_name[30];
    int salary;
    char join[30];
    char dept[30];   
} Worker;

int main() {
    Worker allWorkers[8] = {
        {001,"Monika","Arora",100000,"2014-2-20 9:00;00", "Hr"},
        {002,"Niharika","Verma",80000,"2014-6-11 9:00;00", "Admin"},
        {003,"Vishal","Singhal",300000,"2014-2-20 9:00;00", "Hr"},
        {004,"Amitabh","Singh",500000,"2014-2-20 9:00;00", "Admin"},
        {005,"Vivek","Bhatti",500000,"2014-6-11 9:00;00", "Admin"},
        {006,"Vipul","Dihwan",200000,"2014-6-11 9:00;00","Account"},
        {007,"Satish","Kumar",75000,"2014-1-20 9:00;00", "Account"},
        {8,"Greetika","Chauhan",90000,"2014-4-11 9:00;00","Admin"}
    };

    char* department[3] = {"Hr", "Admin", "Account"};
    int totalSalaries[3];
    int maxSalary = 0, maxEmployee = 0;

    printf("\nHighest Salaries : \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
            if (strcmp(department[i], allWorkers[j].dept) == 0) {
                int salary = allWorkers[j].salary;
                totalSalaries[i] += salary;
                if (maxSalary < salary) {
                    maxSalary = salary;
                    maxEmployee = j;
                }
            }
        }
        printf("| %d\t | %s\t | %s\t | %d\t | %s\t | %s\t \n", allWorkers[maxEmployee].worker_id, allWorkers[maxEmployee].f_name, allWorkers[maxEmployee].l_name, allWorkers[maxEmployee].salary, allWorkers[maxEmployee].join, allWorkers[maxEmployee].dept);
        maxSalary = 0;
        maxEmployee = 0;
        
    }

    printf("\nTotal Salaries Given to each department:\n");
    for(int i=0;i<3;i++){
        printf("%s - %d\n",department[i],totalSalaries[i]);
    }

    printf("\n");

    return 0;
} //end main
