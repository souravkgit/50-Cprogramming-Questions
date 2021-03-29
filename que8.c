#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct employee {
    int id;
    int hour;
    int salary;
}work;
void main()
{
    work e1;
    printf("Enter the employee ID :\n");
    scanf("%d",&e1.id);
    printf("Enter the employee working hours :\n");
    scanf("%d",&e1.hour);
    printf("Enter the employee salary :\n");
    scanf("%d",&e1.salary);

    printf("Employees ID = %d\n",e1.id);
    printf("Employees salary = %d\n",(e1.hour)*(e1.salary));

}
