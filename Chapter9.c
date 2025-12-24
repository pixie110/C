//STRUCTURES
#include<stdio.h>
#include<string.h>

/*struct employee
{
int code;
float salary;
char name[10];
}; //semicolon is important.

int main(){
    struct employee e1 , e2;
    e1.code=4511;
    strcpy(e1.name,"Harry");
    e1.salary=54.87;

    printf("%d %f %s",e1.code, e1.salary, e1.name);
    return 0;

}*/


/*Quick Quiz: Write a program to store the details of 3 employees from user defined data. 
Use the structure declared above.*/

   /* struct employee
{
int code;
float salary;
char name[10];
}; //semicolon is important.

int main(){
    struct employee e1 , e2, e3;

    printf("Enter the value of code\n");
    scanf("%d",&e1.code);

    printf("Enter the value of salary\n");
    scanf("%f",&e1.salary);

    printf("Enter your name\n");
    scanf("%s",&e1.name);

     printf("Enter the value of code\n");
    scanf("%d",&e2.code);

    printf("Enter the value of salary\n");
    scanf("%f",&e2.salary);

    printf("Enter your name\n");
    scanf("%s",&e2.name);

     printf("Enter the value of code\n");
    scanf("%d",&e3.code);

    printf("Enter the value of salary\n");
    scanf("%f",&e3.salary);

    printf("Enter your name\n");
    scanf("%s",&e3.name);*/


//ARRAY OF STRUCTURES
   /* struct employee
{
int code;
float salary;
char name[10];
}; 

int main(){
struct employee facebook[100]; // an array of structures 
// we can access the data using:
facebook[0].code = 100; 
facebook[1].code = 101;
struct employee pavani={100,76.34,"pavani"};
printf("%d %f %s", pavani.code, pavani.salary, pavani.name);*/


//POINTER TO STRUCTURES

/*    struct employee
{
int code;
float salary;
char name[10];
}; 

    int main(){
        struct employee e1;
        e1.code=55;
        struct employee *ptr;
        ptr=&e1;
        printf("%d\n",(*ptr).code);
        printf("%d\n",ptr->code); //same as (*ptr).code */


/*Quick Quiz: Complete this show function to display the content of employee.*/

   /* struct employee
    {
        int code;
        float salary;
        char name[10];
    };
    void show(struct employee e);  //function prototype

    void show(struct employee e){
        printf("code is %d\nSalary is %f\nName is %s", e.code, e.salary, e.name);
    }

    int main(){
        struct employee e1;
        e1.code=4511;
        strcpy(e1.name,"Pavani");
        e1.salary=78.34;
        show(e1);
        return 0;
    } */


//TYPEDEF keyword

    typedef struct employee
    {
        int code;
        float salary;
        char name[10];
    }Emp;

    int main(){
        // typedef int smile;
        // smile a = 446;   //by typedef we created own datatype 'smile'.
        // printf("The value of a is %d\n", a);

        // typedef struct employee Emp;
        Emp e1;   //instead of 'struct employee' we use 'Emp'.
        Emp *ptr = &e1;
        e1.code=4511;
        strcpy(e1.name,"Pavani");
        e1.salary=78.34;
        printf("%d %f %s\n", e1.code, e1.salary, e1.name);
        printf("%d %f %s\n", ptr->code, ptr->salary, ptr->name);

        return 0;   
    }

         
        












    
