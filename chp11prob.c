#include<stdio.h>
#include<stdlib.h>
/*1. Write a program to dynamically create an array of size 6 capable of storing 6 
integers. */

    /*int main(){
        int n = 6;
        int* ptr;
        ptr = (int*) malloc(n* sizeof(int));
        ptr[0]=75;
        printf("%d", ptr[0]);  */


/*2. Use the array in problem 1 to store 6 integers entered by the user. */

  /*  int main(){
        int n = 6;
        int* ptr;
        ptr = (int*) malloc(n* sizeof(int));
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d\n", &ptr[i]);
        }

        printf("The array is :");

        for(int i=0 ; i<n ; i++)
        {
            printf("%d", ptr[i]);
        }  */


/*3. Solve problem 1 using calloc(). */

  /*  int main(){
        int n = 6;
        int* ptr;
        ptr = (int*) calloc(n, sizeof(int));
        ptr[0]=75;
        printf("%d", ptr[0]);  */


/*4. Create an array dynamically capable of storing 5 integers. Now use realloc so 
that it can now store 10 integers. */

 /*   int main(){
        int n = 5;
        int* ptr;
        ptr = (int*) calloc(n, sizeof(int));
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d\n", &ptr[i]);
        }
            
        printf("The array is :");

        for(int i=0 ; i<n ; i++)
        {
            printf("%d\n", ptr[i]);
        } 
        n = 10;
        ptr = (int*) realloc(ptr, 10* sizeof(n));
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d\n", &ptr[i]);
        }
            
        printf("The array is :");

        for(int i=0 ; i<n ; i++)
        {
            printf("%d\n", ptr[i]);
        }  */


/*5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
make it store 15 number (from 7 x 1 to 7 x 15). */

     int main(){
        int n = 10;
        int* ptr;
        ptr = (int*) calloc(n, sizeof(int));
        for(int i=0 ; i<n ; i++)
        {
            ptr[i] = 7 * (i+1);
        }
            
        printf("The array is :\n");

        for(int i=0 ; i<n ; i++)
        {
            printf("%d\n", ptr[i]);
        } 
        n = 15;
        ptr = (int*) realloc(ptr, 10* sizeof(n));
        for(int i=0 ; i<n ; i++)
        {
            ptr[i] = 7 * (i+1);
        }
            
        printf("The array is :\n");

        for(int i=0 ; i<n ; i++)
        {
            printf("%d\n", ptr[i]);
        } 

        return 0;
    }