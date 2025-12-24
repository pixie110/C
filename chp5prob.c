/*1. Write a program using function to find average of three numbers.*/
#include<stdio.h>

// float average(int a, int b, int c);

// float average(int a, int b, int c){
//     return(a+b+c)/3.0;
// }

// int main(){
//     int a=8, b=7, c=6;
//     printf("The average of a,b and c is %f", average(a,b,c));
//     return 0;
// }



/*2. Write a function to convert Celsius temperature into Fahrenheit. */

// float c2f(float);   //function prototype

// float c2f(float c){       //function definition
//     return ((9*c)/5 + 32);
// }

// int main(){
//     float c = 45;
//     printf("Celsius to fahrenhiet for %f is %.2f", c, c2f(c));
//     return 0;
//}




/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s.*/

// float force(float);

// float force(float mass){
//     return mass*9.8;
// }

// int main(){
//     int m;
//     printf("Enter mass of the object:");
//     scanf("%d",&m);
//     printf("The force of attraction exerted by the earth is %.1f", m*9.8);
//     return 0;

// }



/*4. Write a program using recursion to calculate nth element of Fibonacci series.*/


// int main(){
// int a = 4; 
// printf("%d %d %d \n", a, ++a, a++); 
// 6 6 4
// 4 5 5
// return 0;
// }



/*7. Write a program using function to print the following pattern (first n lines) 
* 
* * * 
* * * * * 
*/


int main(){
    int n=3;
    for(int i=0 ; i<n ; i++){
        // this loop will run fro 0 to 2
        //if i = 0 ----> print 1 star
        //if i = 1 ----> print 3 star
        //if i = 2 ----> print 5 star
        //no_of_stars= 2*i+1

        for(int j=0 ; j<2*i+1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


