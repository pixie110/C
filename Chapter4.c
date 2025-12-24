/*LOOPS*/
#include <stdio.h>
int main()
{
    // int i=0;
    // while(i<4)
    // {
    //     printf("HAPPY BIRTHDAY!\n");
    //     i=i+1;
    // }

    // int i = 0;
    //  while(i<10)
    //  {
    //     printf("Happy Birthday!\n", i++);
    // }

    // int i = 0;
    // while (i < 10)    //condition applied
    // {

    //     printf("The value of i is: %d \n", i++);
    // }



    /*Write a program to print natural numbers from 10 to 20 when initial loop
    counter is initialized to 0.*/

    // int i=0;
    // while(i<=20){
    //     if(i>=10){
    //         printf("The value of i is:%d\n",i);
    //     }
    //     i++;
    // }


/* INCREMENT AND DECREMENT OPERATORS*/

    // int i=5;
    // printf("The value of i is:%d \n",i);

    // i=i+5;  //i=10
    // printf("The value of i is:%d \n",i);
    // i++;   //i=11
    // printf("The value of i is:%d \n",i++);  //here i becomes 12 after operating
    // printf("The value of i is:%d\n",++i);

    // i +=2;   //same as i= i+2
    // printf("The value of i is:%d \n",i);

// i++ operate(uses) first and then increments(post increment)
// ++i first increment and then operates(uses) the value(pre increment)



   /*DO-WHILE LOOP*/

// 'while' checks the condition and executes the code.
// 'do-while' executes the code and then checks the condition.

    // int i=0;
    // do
    // {
    //     printf("The value of i is:%d \n",i);
    //     i++;
    // } while (i<4);
    


/*Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.*/

    
    // int n ,i =1;
    
    // scanf("%d", &n);
    // do
    //  {
    //     printf("%d\n",i);
    //     i++;
    //  } while (i<=n);
     

     //  FOR LOOP

    //  int n = 6;
    // for (initialize; test; increment or decrement).
    //  for(int i=0; i<n; i++)
    //  {
    //     printf("The value of i is:%d \n",i);
    //  }


/*Quick Quiz: Write a program to print ‘n’ natural numbers.*/

    // int n;
    // printf("Enter the value of n:");
    // scanf("%d",&n);
    // for(int i=0; i<n; i++){

    //     printf("%d \n",i);
    // }


// DECREMENTING IN FOR LOOP.

    // int n=12;
    // for( int i=n; i ; i--)
    // {
    //     printf("%d\n",i);
    // }


//THE BREAK AND CONTINUE STATEMENT.

    // int n= 15;
    // for(int i=0; i<15; i++)
    // {
    //     if(i==5){
    //         // break;  // exit the loop now!
    //         continue; // skip(terminate) this iteration now!
    //     }
    //     printf("%d\n",i);
    // }
    // printf("The for loop is complete!");



    // int skip=5;
    // int i=0;
    
    // while(i<10){
        //     if(i==skip){
            //         i++;
    //         continue; // skips the rest of the loop body for i == 5.
    //     }
    //     printf("%d\n",i);
    //     i++;
    // }
    






     


    return 0;
}
