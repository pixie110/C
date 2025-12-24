            //TYPE DECLARATION INSTRUCTIONS
#include<stdio.h>
int main() 
{
    int i=8;               //declare and initialize i with 8
    int j=i;
    int a=7,b=3,c=2,d=9;     //can declare and initialie multiple variables.
    // %d is called format specifier.
    //d is for int,%f is for float,%c is for char.  
    printf("The value of i is %d and value of j is %d\n",i,j);
    printf("The value of a is %d and value of b is %d\n",a,b);
    printf("The value of c is %d and value of d is %d\n",c,d);
    return 0;

    int j1=a+j-i;   //valid:use previously defined variables.

    // invalid:a is used before declaration.
    float b =a+3;
    float a =1.1;


            // ARITHMATIC INSTRUCTIONS
    
    int a=6;
    int b=2;
    int c=a+b;
    printf("The value of a is %d and b is %d and their sum is %d\n",a,b,c);

    //  Modulus operator is used to get remainder.
    printf("The remainder when a is divided by b is: %d",a%b);

    // This does not work for eponentiation in C.
    // int d = a^b;

        // Type conversion
    
    int a=9;
    int b=2;
    float c=9/2;       //Arithmatic operation of one int with other int will always give an int.
    printf("The value of a/b is %f",c);
    // return 0;          

// But if the operation is inn between int and float then it will result in float.

    float a=9.0;
    int b=2;
    float c= a/b;
    printf("The value of a/b is: %f",c);      // now it will result in float.
    // return 0;


// TYPE COMPATIBILITY.

    int a= 6.9;
    printf("The value of a:%d\n",a);    
    // Here the float 6.9(float) will be demoted to 6(int) because a is not able to store float.
    
    float b=3;
    printf("The value of b:%f",b);
    // in this case b will store to 3.0 (promotion to float ).
    
    
// Operator associativity.

    int a=3;
    int b=6;
    int c=9;
    printf("The value is %d",a*b/c);  
    printf("The value is:%d",3*b/2*c+7*a);
        // 3*b/2*c+21
        // 18/2*c+21
        // 9*c+21
        // 81+21
        // 102
// By priority *,/,%,+,-,=

// TYPE CASTING
 
    int n=45;
    float m=69.4;
    n=(int)m;       //type casting statement,this changed float into int.
    printf("%d",n);           
    return 0;
}




