#include <iostream>
#include <cstring> // For strcpy
using namespace std;

int main( void ){
char name[ 30 ];
int empid;
float salary;
printf("Name :");
scanf("%s",name);
printf("Empid :");

scanf("%d",&empid);
printf("Salary : ");
scanf("%f", &salary);
printf("Name : %s\n", name);
printf("Empid : %d\n", empid);
printf("Salary : %f\n", salary);
//printf("%-30s%-5d%-10.2f\n", name, empid, salary);
return 0;
  }
