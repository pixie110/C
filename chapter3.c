// CONDITIONAL STATEMENTS
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if (age > 10)
    {

        printf("Your age is greater tha 10.\n");
    }

    if (age%5==0)
    {

        printf("Then you are elegible to go.");
    }

    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age > 12)
    {

        printf("You are eligible for license.\n");
    }
    else
    {

        printf("SORRY! you are under age.\n");
        printf("You are not eligible for the license.");
    }
    // else block is not necessary but optional.

    // The condition can be any valid expression.In C a non valid is considered to be true.

    if (1)
    {
        printf("This if is executed!\n");
    }
    if (2345)
    {
        printf("This if is executed!\n");
    }
    if (7.14)
    {
        printf("This if is executed!\n");
    }
    if ('c')
    {
        printf("This if is executed!\n");
    }
    if (0)
    {
        printf("This if will not be executed."); //this will not be executed.
    }

    // LOGICAL OPERATORS

    int a=1; int b=1;

    printf("The value of a and b is:%d\n",a&&b);
    printf("The value of a or b is:%d",a||b);
    // in AND 1 AND 1 will evaluate as true.
    // in OR(||) is true when atleast one condition is true.

    int c=0; int d=1;

    printf("The value of c and d is:%d\n",c&&d);
    printf("The value of a or d is:%d\n",c||d);
    // in 0 AND 1 will evaluate as false.(VICE-VERSA)

    int e = 0;
    int f = 0;

    printf("The value of e and f is:%d\n", e && f);
    printf("The value of e or f is:%d\n", e || f);
    // in 0 AND 0 will evaluate as false.

    int a = 1;
    int b = 1;

    printf("The value of a and b is:%d\n", a && b);
    printf("The value of a or b is:%d\n", a || b);
    printf("The value of not(a) is:%d\n",!a);  //NOT operator will split the value of a into 1.

    if(a&&b)
    {

        printf("Both are true...\n");
    }
    else
    {

        printf("Bothe are false...\n");
    }

    // ELSE IF CLAUSE.

    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age > 80)
    {

        printf("Your age is more than 80.");
    }
    else if (age > 60)
    {

        printf("Your age is more than 60.");
    }
    else if (age > 40)
    {

        printf("Your age is more than 40.");
    }
    else if(age > 20)
    {

        printf("Your age is more than 20.");
    }
    else
    {

        printf("You are under arrest.");
    }
    // Without else(Optional) we can write IF and ELSE IF.

    // condition ? expression-if-true : expression-if-false
     int a=380;
     int b=73;
     a>b?printf("a is greater."):printf("b is greater.");
    // Here "?" and ":" are called Ternary Operators .

    // SWITCH CASE CONTROL INSTRUCTION.

    int a;
    printf("Enter a:");
    scanf("%d",&a);

    switch(a){
        case 1:
        printf(" You Entered 1\n");
       break;

        case 2:
        printf("You entered 2\n");

       break;
        case 3:
        printf("You entered 3\n");

       break;
        case 4:
        printf("You entered 4\n");

       break;
        default:
        printf("Nothing matched");
    }

    /*Write a program to find grade of a student given his marks based on below:*/

    
    char grade;
    int marks;

    printf("Enter marks of the student: ");
    scanf("%d", &marks);

    if(marks <= 100 && marks >= 90)
    {
        grade = 'A';
    }
    else if(marks < 90 && marks >= 80)
    {
        grade = 'B';
    }
    else if(marks < 80 && marks >= 70)
    {
        grade = 'C';
    }
    else if(marks < 70 && marks >= 60)
    {
        grade = 'D';
    }
    else if(marks < 60 && marks >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("The grade is: %c\n", grade);

    return 0;
}
