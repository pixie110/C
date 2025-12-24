/*1. Write a program to print the address of a variable. Use this address to get the 
value of the variable.*/

#include<stdio.h>

// int main(){
//     int i = 3;
//     int* j = &i;

//     printf("The address of i is %u\n", &i);
//     printf("The value of i is %d\n", *j);
//     return 0;
// }


/*2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why? */

// int returning5(int* j){
//     printf("The value of j is %d\n", j);
//     printf("The value at j is %d\n", *j);
//     return  5;
// }
// int main(){
//     int i = 3;
//     int* j = &i;
//     printf("The address of i is %u\n",&i);
//     returning5(j);
//     return 0;
// }



/* 3. Write a program to change the value of a variable to ten times of its current 
value. */

//  void change(int*);

//  void change(int *a){
//      *a = *a* 10;
//  }

// int main(){
//      int x = 35;
//      printf("The value of x is %d\n", x);
//      change(&x);
//      printf("The value of x is %d", x);
//      return 0;
//      }


/*4. Write a function and pass the value by reference.*/

// int num(int *,int *);

// int num(int*a , int*b){
//     *a = 6;
//     return (*a + *b);
// }

// int main(){
//    int x = 1, y= 6;
//    printf("The sum of %d and %d is %d\n",x,y, num(&x,&y));
//    printf("The value of x is %d",x);
//    return 0;
// }


/*5. Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main().*/

// int* sum (int a, int b){
//     int s = a+b;
//     int* ptr = &s;
//     printf("The sum is %d\n",s);
//     return ptr;
// }

// float* average(int a, int b){
//     float avg = (a+b)/2.0;
//     float* ptr= &avg;
//     printf("The average is %f\n", avg);
//     return ptr;
// }

// int main(){
//     int x = 4;
//     int y = 8;
//     int * ptr1;
//     float * ptr2;

//     ptr1 = sum(x,y);
//     ptr2 = average(x,y);

//     printf("The address of sum is %u and average is %u.",ptr1,ptr2);
//     return 0;
// }


/*6. Write a program to print the value of a variable i by using “pointer to pointer” type 
of variable.*/

// int main(){
//     int i = 3;
//     int* ptr1 = &i;
//     int** ptr2 = &ptr1;

//     printf("The address of i is %d\n", &i);
//     printf("The value of i is %d\n", *ptr1);
//     printf("The value of i is %d\n", **ptr2);
//     return 0;
// }



/*7. Try problem 3 using call by value and verify that it does not change the value of 
the said variable.*/


void change(int);

 void change(int a){
     a = a* 10;
 }

int main(){
     int x = 35;
     printf("The value of x is %d\n", x);
     change(x);
     return 0;
     }


