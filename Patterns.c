#include <stdio.h>
int main()
{
    // *****
    // *****
    // *****
    // *****
    // *****

    // int n = 5;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }



    // *****
    // *   *
    // *   *
    // *   *
    // *****

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
        
//         {
//             if (i == 1 || j == 1 || i == 5 || j == 5)
//             {

//                 printf("*");
//             }
//             else
//             {

//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }



// *
// **
// ***
// ****
// *****


// for(int i=1 ; i<=5; i++){    //1st loop is for row
//     for(int j=1; j<=i; j++){    //2nd loop is for column
//         printf("*");
//     }
//     printf("\n");

// }


// *****
// ****
// ***
// **
// *

    // for(int i=5; i>=1; i--){     //loop for row.
    //     for(int j=1; j<=i; j++){     //loop for column.
    //         printf("*");
    //     }
    //     printf("\n");
    // }



//     *
//    **
//   ***
//  ****
// *****

    // int n=5;

    // for(int i=1; i<=n; i++){

    //     //for printing n-1 spaces before stars iteration.
    //     for (int j=1; j<=n-i; j++){
    //         printf(" ");
    //     }

    //     // for printing stars.
    //     for(int k=1;k<=i; k++){
    //     printf("*");
    //     }

    //     printf("\n");
    // }


// *****
//  ****
//   ***
//    **
//     *

    // int n = 5;  

    // // loop for rows
    // for(int i = n; i >= 1; i--){
        
    //     // print spaces
    //     for(int j = 1; j <= n - i; j++){
    //         printf(" ");
    //     }
    //     // print stars
    //     for(int k = 1; k <= i; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5 


    // int n=5;

    // for(int i=1; i<=n; i++){
    //     for( int j=1; j<=i; j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }


// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 


// int n = 5;  

//     for(int i = n; i >= 1; i--){

//         // print numbers from 1 to i
//         for(int j = 1; j <= i; j++){
//             printf("%d ", j);
//         }

//         printf("\n");
//     }



// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 


int n = 5;   // total number of rows
    int num = 1; // starting number

    // loop for rows
    for(int i = 1; i <= n; i++){ 

        // loop for numbers in each row
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            
            num++;       // increase number
        }

        printf("\n");
    }

    






return 0;
}
