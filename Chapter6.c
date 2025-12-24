#include<stdio.h>
// int main(){
    // int i = 72;
    // int * j= &i; //j is a pointer pointing to i (j is the integer pointer)
    // int k = 96;
    // printf("The address of i is %p\n", &i);
    // printf("The adress of i is %p\n", j);
    // printf("The adress of k is %p\n", &k);


       //VALUE AT ADDRESS

    // printf("The value at adress j is %d\n", *j);  //here address point j will tell the value that is aasigned
    // printf("The value at address j is %d", *(&i));  // * gives value & tells what's address.

//Similarly it goes with char and float.

    // char i = 'A';
    // char *j = &i;  // here j is character pointer.
    
    // float k = 47.8;
    // float *k1 = &k;
    // printf("The address of i is %p\n", &i);
    // printf("The address of i is %p\n", j);
    // printf("The address of k is %p\n", k1);
    // printf("The value at address k1 is %p\n", *k1);


//POINTER TO POINTER

    // int i = 6;
    // int *j = &i;
    // int **k = &j;

    // printf("The value of i is %d\n",i);
    // printf("The value of i is %d\n",*j);
    // printf("The value of i is %d\n",*(&i));
    // printf("The value of i is %d\n",**(&j));


//     return 0;
// }

//Call by value function

    // int sum(int,int);

    // int sum(int a,int b){
    //  a = 6;        //Sum function cannot change x using a because copy of x is provided to sum in a.
    //     return a+b;
    // }

    // int main(){
    //     int x=1,y=6;
    //     printf("The sum of 1 and 6 is %d", sum(x,y));
    //     return 0;
    //}


//Call by refernce function

     int sum(int *,int *);

    //Sum function should change the value of x.
     int sum(int* a,int* b){
          *a = 6;    //value at a address is equal to 6
         return (*a + *b);
     }

     int main(){
         int x=1,y=6;
         printf("The sum of 1 and 6 is %d\n", sum(&x,&y));
         printf("The value of x is %d",x);
         return 0;
     }



// Case of swapping.

    // void swap(int*,int*);

    // void swap(int*a , int*b){
    //     int temp;
    //     temp = *a;
    //     *a = *b;
    //     *b = temp;
    // }

    // int main(){
    //     int a = 4, b = 6;
    //     swap(&a,&b);
    //     printf("The value of a is %d and b is %d", a,b);
    //     return 0;
    // }