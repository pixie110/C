// FUNCTIONS AND RECURSIONS
#include <stdio.h>

 //Function prototype
 int sum(int,int);        //this will tell us to take two integers and will return one integer.

 // Function definition
 int sum(int x,int y)
{
     // printf("The sum is %d\n",x+y);
     return x+y;
}

int main(){
     int a=1;
     int b=2;

     // int c=a+b;
     // printf("The sum is %d\n",c);
     int c= sum(a,b);   //function call
     printf("%d",c);

     int a1=12;
     int b1=23;
     // int c1=a1+b1;
     // printf("The sum is %d\n",c1);
     int c1= sum(a1,b1);   /*here again sum function has been called,it will match its arguements to
                             line 8 parameters.*/
     printf("%d",c1);

     int a2=81;
     int b2=29;

     // int c2=a2+b2;
     // printf("The sum is %d\n",c2);
     int c2 =sum(a2,b2);
     printf("%d",c2);
    return 0;
}





/*As a sample code to understand the working.*/

// Function prototype
// void display();
// int main()
// {
//     int a;     // Variable declaration
//     display(); // Function call
//     return 0;  // Return statement
// }
// // Function definition
// void display()
// {
//     printf("hi i am display\n"); // Printing the message




// Quick Quiz: Write a program with three functions
// 1. Good morning function which prints “good morning”. 
// 2. Good afternoon function which prints “good afternoon”. 
// 3. Good night function which prints “good night”.



    // Function prototype
    // void good_morn();
    // void good_after();
    // void good_eve();

    // // Function definition

    // void good_morn(){
    //     printf("good morning\n");
    // }
    // void good_after(){
    //     printf("good afternoon\n");
    // }
    // void good_eve(){
    //     printf("good evening\n");
    // }

    // int main(){
    //     good_morn();
    //     good_after();
    //     good_eve();


/*If the passed variable is changed inside the function, the function call doesn’t 
change the value in the calling function.*/ 
    // int change(int a);

    // int change(int a){
    //     a=77;   //misnomer
    //     return 0;
    // }

    // int main(){
    //     int b=22;
    //     change(b);  //The value of b remains 22
    //     printf("b is %d",b);



/*Quick Quiz: Use the library function to calculate the area of a square with side a.*/


    // #include<math.h>

    // int main(){
    //     int a= 5;
    //     printf("The area of this square is %.2f\n", pow(a,2));
    
//RECURSION


   /* int factorial(int);

    int factorial(int n){
      if(n==1 || n==0){
        return 1;
      }  
        return factorial(n-1)*n;
    }

    int main(){
        int a=3;
        printf("The factorail of number %d is %d",a factorial(a));
        return 0;

    } */







