#include<stdio.h>
int main(){
    /*char g;
    int yos, qua, sal = 0;
    printf("Enter your gender, years of service, and qualifications(G=0, PG=1):");
    scanf("%c %d %d", &g, &yos, &qua);

    if(g=='m' && yos>=10 && qua==1)
        sal = 11000;
    else if((g=='m' && yos>=10 && qua==0) || (g=='m' && yos<10 && qua==1))
        sal = 10000;
    else if(g=='m' && yos<10 && qua== 0)
        sal = 7000;
    else if(g=='f' && yos>=10 && qua==1)
        sal = 12000;
    else if(g=='f' && yos>=10 && qua==0)
        sal = 9000;
    else if(g=='f' && yos<10 && qua==1)
        sal = 10000;
    else if(g=='f' && yos<10 && qua==0)
        sal = 6000;

    printf("\n Salary of the employee is %d\n", sal); */


/*LEAP YEAR*/

   /* int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if(year%400 == 0 || year%100 != 0 && year%4 ==0)
        printf("It is a leap year\n");
    else
        printf("It is not a leap year\n"); */


/*Another question*/

    float otpay;
    int hour, i = 1;
    while(i<=10)
    {
        printf("Enter the number of hours worked\n");
        scanf("%d", &hour);
        if(hour>=40)
            otpay = (hour-40)*120;
        else
            otpay = 0;
            printf("Hour = %d , overtime pay = Rs %f\n", hour, otpay);
            i++;
    }
    return 0 ;
}

