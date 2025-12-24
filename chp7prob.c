/* 1- Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the array.*/

#include <stdio.h>
int main()
{
    // int a[] = {1,2,3,4,5,6,7,8,9,10};
    // int* ptr = a;
    // printf("The value at address %u is %d", ptr+2, *(ptr+2));

    /*3. Write a program to create an array of 10 integers and store multiplication table of
    5 in it.*/

    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i] = 5 * (i + 1);
    // }

    // for(int i= 0 ; i<10 ; i++){
    //     printf("The vale of 5 x %d is %d\n", i+1, arr[i]);
    // }

    /*4. Repeat problem 3 for a general input provided by the user using scanf.*/

    // int n;
    // scanf("%d",&n);
    // int arr[10];

    // for(int i = 0 ; i<10 ; i++){
    //     arr[i] = n* (i+1);
    // }

    // for(int i = 0 ; i<10 ; i++){
    //     printf("The value f %d X %d is %d\n", n, i+1, arr[i]);
    // }

    /*5. Write a program containing a function which reverses the array passed to it. */

    // int arr[7] = {1,2,3,4,5,6,7};

    // for(int i=6 ;i >= 0 ; i-- ){
    //     printf("Numbers in reverse order are : %d\n", arr[i]);
    // }

    // By using fuctions.

    //     void printarray(int a[], int n){
    //     for(int i=0 ; i<n ; i++){
    //         printf("%d", a[i]);
    //     }
    //     printf("\n");
    // }

    //     int main(){
    //         int arr[] = {1,2,3,4,5,6};
    //         printarray(arr,6);

    /*6. Write a program containing functions which counts the number of positive
    integers in an array. And display them.*/

    // int count(int a[], int n){
    //    int no_of_positive=0;
    //    printf("The positive integers are:");
    //     for(int i=0 ; i<n ; i++)
    //     {
    //         if(a[i]>0){
    //             printf("%d ", a[i]);
    //             no_of_positive++;
    //         }
    //     }
    //     printf("\n");
    //     return no_of_positive;
    // }

    // int main(){
    //     int a[] = {1,2,-3,4,-5,6,-7,8,-9,10};
    //     printf("The number of positive integers is %d", count(a,10));

    /*7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
    and 9 respectively. */

    // int arr[3][10];
    // int mul[] = {2, 7, 9};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         arr[i][j] = mul[i] * (j + 1);
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("The value of arr[i][j] is %d\n", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    /*8. Repeat problem 7 for a custom input given by the user. */

    // int n1,n2,n3;
    // scanf("%d %d %d", &n1,&n2,&n3);
    // int arr[3][10];
    // int mul[] = {n1,n2,n3};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         arr[i][j] = mul[i] * (j + 1);
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("The value of arr[i][j] is %d\n", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    /*9. Create a three–dimensional array and print the address of its elements in
    increasing order. */

//     int arr[2][3][4];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; j < 4; k++)
//             {
//                 printf("%u ", &arr[i][j][k]);
//             }
//         }
//     }

//     return 0;
// }
