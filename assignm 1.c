#include<stdio.h>
 struct Student
{
    char name[20];
    int id;
    float CGPA;
    struct Student_diu_details
   {
       char department_name[20];
       int year;
       char semester[10];
   }dys;
}student1;
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("student NAME : ");
        scanf("%s",student1.name);
        printf("student ID : ");
        scanf("%d",&student1.id);
        printf("student CGPA : ");
        scanf("%.02f",&student1.CGPA);
        printf("student dys : ");
        scanf("%s %d %s",student1.dys.department_name,&student1.dys.year,student1.dys.semester);
    }
        Display_info();

        return 0;


}
void Display_info()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nstudent NAME :%s",student1.name);
        printf("\nstudent ID :%d",student1.id);
        printf("\nstudent CGPA :%.02f",student1.CGPA);
        printf("\nstudent dys : %s %d %s",student1.dys.department_name,student1.dys.year,student1.dys.semester);

    }
}


