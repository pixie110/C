#include<stdio.h>
#include<stdlib.h>
int main(){
    /*int n;
    int* ptr;
    printf("Enter the value of n:");
    scanf("%d",&n);
    ptr = (int*) malloc(n*(sizeof(int)));
    //int ar[n]; //not allowed in c.
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d",ptr[0]); */

    //Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().

 /*   float n;
    float* ptr;
    printf("Enter the value of n:");
    scanf("%f",&n);
    ptr = (float*) malloc(n*(sizeof(float)));

    ptr[0]=3.742087;
    ptr[1]=87.742087;
    ptr[2]=34.742087;
    ptr[3]=12.742087;
    ptr[4]=31.742087;

    printf("%f\n",ptr[0]);
    printf("%f\n",ptr[1]);
    printf("%f\n",ptr[2]);
    printf("%f\n",ptr[3]);
    printf("%f\n",ptr[4]);  */
    
    //in malloc we have to give the bytes
    //it has garbage values
    
    //in calloc we assign the size 
    //by default it gives zero.

/*Quick Quiz: Write a program to create an array of size n using calloc where n is an 
integer entered by the user. */

    /*int n;
    int* ptr;
    printf("Enter the value of n:");
    scanf("%d",&n);
    ptr = (int*) calloc(n,(sizeof(int)));  //(kitta chahiye,kya chahiye)
    ptr[0] = 3;
    printf("%d",ptr[0]);  */

    
/*Quick Quiz: Write a program to demonstrate the usage of free() with malloc().*/

 /*   int n;
    int* ptr;
    printf("Enter the value of n:");
    scanf("%d",&n);
    ptr = (int*) malloc(n * sizeof(int));  
    ptr[0] = 3;
    free(ptr);   //and this will give us garbage value and will make it free.
    printf("%d",ptr[0]);  */


//REALLOC
 
    int n = 5;
    int* ptr;
    printf("Enter the value of n:");
    scanf("%d",&n);
    ptr = (int*) malloc(n * sizeof(int));  
    ptr[0] = 3;
    printf("%d",ptr[0]);  

    ptr = (int*) realloc(ptr,10* sizeof(int));  

    
    return 0;
}