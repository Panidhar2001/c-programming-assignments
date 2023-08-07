#include<stdio.h>
#include<string.h>
//typedef struct employee
struct employee
{
	int eid;
	int salary;
	char name[20];
	char email[20];
};
typedef struct employee emp;
int main()
{
	
	/*emp e1,e2;
	printf("size of employee1 is %ld\n",sizeof(e1));
	printf("size of employee2 is %ld\n",sizeof(e2));
	e1.eid=12;
	e1.salary=2222;
	strcpy(e1.name,"phani");
	strcpy(e1.email,"phani@gmail.com");
	printf("employee id is %d\n",e1.eid);
	printf("employee salary is %d\n",e1.salary);
	printf("employee name is %s\n",e1.name);
	printf("employee email is %s\n",e1.email);
	printf("employee id is %d\n",e2.eid);
	printf("employee salary is %d\n",e2.salary);
	printf("employee name is %s\n",e2.name);
	printf("employee email is %s\n",e2.email);    
	                                                  */
	emp e[5];
	printf("Enter 5 employee details\n");
	for(int i=0;i<5;i++)
	{
		printf("enter employee %d id",i+1);
		scanf("%d",&e[i].eid);
		printf("enter employee %d salary",i+1);
		scanf("%d",&e[i].salary);
		printf("enter employee %d name",i+1);
		scanf("%s",e[i].name);
		printf("enter employee %d gmail ",i+1);
		scanf("%s",e[i].email);
	}
	printf("Employee details\n");
	for(int i=0;i<5;i++)
	{
		printf("Eid = %d\n",e[i].eid);
		printf("salary = %d\n",e[i].salary);
		printf("name = %s\n",e[i].name);
		printf("Email = %s\n",e[i].email);
	}
}
