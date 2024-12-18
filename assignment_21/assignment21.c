#include <stdio.h>
#include <stdlib.h>

typedef struct { 
  char first_name[30];  
  char last_name[30];
  int employee_id;
  int SSN;
  char title[20];
} data;

struct {
  data employee_1;
  data employee_2;
} employees; 

int main(void) {
  for (int i = 0; i < 2; i++) {
    data* employee = &employees.employee_1;

    if (i > 0) 
      employee = &employees.employee_2;  

    printf("Enter the employee's first name: ");
		scanf("%s", &employee->first_name);

		printf("Enter the employee's last name: ");
		scanf("%s", &employee->last_name);

		printf("Enter the employee's ID number: ");
		scanf("%d", &employee->employee_id);

		printf("Enter the last four digits of the employee's SSN: ");
		scanf("%d", &employee->SSN);

		printf("Enter the employee's job title (do not include the word \'Engineer\'): ");
		scanf("%s", &employee->title);

		puts("");     
  }


  for (int i = 0; i < 2; i++) {
    data* employee = &employees.employee_1;

    if (i > 0) 
      employee = &employees.employee_2;  

    printf("\nEmployee information for %s %s: ", employee->first_name, employee->last_name); //(Todo): I don't understand why do I need to give the address
		printf("\nID: %d", employee->employee_id);
		printf("\nSSN: %d", employee->SSN);
		printf("\nTitle: %s Engineer\n", employee->title);
  }


  return 0;
}