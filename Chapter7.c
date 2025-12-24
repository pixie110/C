#include<stdio.h>
int main(){

    // int marks[90];   // here it will create space for 90 integers

    // marks[0]=48;
    // marks[1]=92;
    // //We can go all the way till marks[89].
    // printf("The marks of 0 and 1 is %d and %d", marks[0],marks[1]);



//By taking inputs using scanf.

    // int marks[5];   
    // printf("Enter marks of 5 students\n");

    //  scanf("%d", &marks[0]);
    //  scanf("%d", &marks[1]);
    //  scanf("%d", &marks[2]);
    // // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    // for(int i= 0 ; i<5 ; i++){
    //      scanf("%d", &marks[i]);
    //  }
    //  for(int i=0 ; i<5 ; i++){
    //      printf("The value of marks at index %d is %d\n", i, marks[i]);
    //  }

    //  printf("The marks of 0 and 1 is %d and %d", marks[0],marks[1]);



//Other ways for initializing array.

    // int cgp[]={5,2,8};
    // //it can also be done without mentioning 3.

    // for(int i=0 ; i<3 ; i++){
    //     printf("The value of marks at index %d is %d\n", i, cgp[i]);

    // }
    


//POINTER ARITEMATIC USING INTEGER POINTER

    // int a = 45;
    // int* ptr = &a;
    // printf("The address os a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++;         //as it is an integer pointer it will increase the value by 4 bytes.
    // printf("The value of ptr is %u\n",ptr);


// POINTER ARITHEMATIC USING CHARACTER POINTER.

    // char a = 'h';
    // char* ptr = &a;
    // printf("The address os a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++;         //as it is an character pointer it will increase value by 1 byte.
    // printf("The value of ptr is %u\n",ptr);


//ARRAY IN MEMORY
    // int marks[5];   
    // printf("Enter marks of 5 students\n");

    // for(int i= 0 ; i<5 ; i++){
    //      scanf("%d", &marks[i]);
    //  }
    //  for(int i=0 ; i<5 ; i++){
    //      printf("The address of marks at index %d is %d\n", i, &marks[i]);
    //  }



// Array using pointer.

    // int marks[] = {24, 56, 49, 52};
    // int* ptr = &marks[0];
    // // int *ptr = marks;   // same as int* ptr = &marks[0]

    // for (int i = 0; i < 4; i++) {
    //     //printf("The marks at index %d is %d\n", i, marks[i]);
    //      printf("The marks at index %d is %d\n", i, *ptr);
    //      ptr++;
    // }




/*Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to 
print the content of this 2-d array on the screen.*/

    int arr[3][2];  //3 rows and 2 columns

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<2 ; j++){
        printf("Enter the value of arr[%d][%d]\n", i,j);
        scanf("%d", &arr[i][j]);
    }
}
    //  for(int i=0; i<3 ;i++){
    //      for (int j=0; j<2 ; j++)
    //      printf("The value of arr[%d][%d] is %d\n", i,j,arr[i][j]);
    //  }

//if we want it like a matrix.

    for(int i=0; i<3 ;i++){
         for (int j=0; j<2 ; j++){
         printf(" %d ",arr[i][j]);
     }
     printf("\n");
    }

    return 0;
}
