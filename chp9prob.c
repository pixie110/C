#include <stdio.h>
/*1. Create a two-dimensional vector using structures in C.*/

/*struct vector
{
    int i;
    int j;
};

    int main(){
        struct vector v = {1,2};
        printf("The value of vector is %di + %dj",v.i, v.j);
        return 0;
    }*/

/*2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional. */

/*struct vector
{
    int i;
    int j;
};
struct vector sumvector(struct vector v1, struct vector v2){  //imagine 'struct vector' as int.
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(){
    struct vector v1={2,5};
    struct vector v2={3,9};
    struct vector v3=sumvector(v1,v2);
    printf("The sum of vector v3 is %di + %dj ", v3.i, v3.j);
    return 0;
} */

/*4. Write a program to illustrate the use of arrow operator → in C. */

/*typedef struct shop
{
    int qty;
    float rate;
}book;

int main(){
    book b1;
    book* ptr = &b1;
    ptr->qty=5;
    //(*ptr).rate = 70.54;
    ptr->rate=70.54;
    printf("The value of qty is %d and the value of rate is %.2f\n", ptr->qty, ptr->rate);
    return 0;
}  */

/*5. Write a program with a structure representing a complex number. */

/* typedef struct c
{
    int real;
    int imaginary;
}complex;

int main(){
    complex c={3,2};
    printf("The structure representing a complex number is %d + %di", c.real, c.imaginary);
    return 0;
}  */

/*6. Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.*/

/* typedef struct c{
     int real;
     int imaginary;
 }complex;

 void display (complex c){
     printf("The value of complex number is %d + %di \n", c.real, c.imaginary);
 }

 int main(){
     complex arr[5];
     for(int i=0 ; i<5 ; i++){
         printf("Enter the real value:\n");
         scanf("%d",&arr[i].real);
         printf("Enter the imaginary value:\n");
         scanf("%d",&arr[i].imaginary);
         display(arr[i]);
     }
     return 0;
 }   */

/*8. Create a structure representing a bank account of a customer. What fields did
you use and why? */

/*struct bankacc{
    int accNo;
    char name[34];
    char ifsc[12];
    float balance;
};  */

/*9. Write a structure capable of storing date. Write a function to compare those
dates. */

/*struct date
{
    int mm;
    int dd;
    int yyyy;
};
int compare(struct date d1, struct date d2)
{
    // if d1 is in the future then return 1.
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d1.dd)
    {
        return 1;
    }
    else if (d1.dd < d1.dd)
    {
        return -1;
    }
}

    int main(){
        struct date d1={11,3,2008};
        struct date d2={4,2,2012};
        printf("%d",compare (d1,d2));
        return 0;
    }  */



/*10. Solve problem 9 for time using ‘typedef’ keyword. */

typedef struct date
{
    int mm;
    int dd;
    int yyyy;
}DT;
int compare(DT d1, DT d2)
{
    // if d1 is in the future then return 1.
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d1.dd)
    {
        return 1;
    }
    else if (d1.dd < d1.dd)
    {
        return -1;
    }
}

    int main(){
        DT d1={11,3,2008};
        DT d2={4,2,2012};
        printf("%d",compare (d1,d2));
        return 0;
    }
