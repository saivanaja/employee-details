#include<stdio.h>
struct emp{
int eno;
char ename[20],dep[30];
float esal;
};
int main(){
int j;
struct emp e;
printf("Enter Employee detail \n");
printf("empno :-\t");
scanf("%d",&e.eno);
printf("empname :-\t");
scanf("%s",&e.ename);
printf("department name :-\t");
scanf("%s",&e.dep);
printf("emp salary :-\t");
scanf("%f",&e.esal);
printf("\n \n");
printf("Enter 1 to print");
scanf("%d",&j);
if(j==1){
printf("Employee details are \n \n Employee name:- \t %s \n Employee number:- \t %d \n Employee salary:- \t %f",e.ename,e.eno,e.esal);
}
else
exit(1);
}
