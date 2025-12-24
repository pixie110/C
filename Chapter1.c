#include <stdio.h>

int main()
{

    printf("Hello Wrld!");
    return 0;

    int a;             //variable declaration
    a=20;              //variable initialiation
    printf("The output is:%d",a);
    return 0;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    return 0;

    int d;
    scanf("%d", &d);  
    printf("The value of a is %d",d);
    return 0;

    int e;
    e=3;

    float f;
    f=6.7;

    char g;
    g='e';

    printf("The value of e is %d\n",e);
    printf("The value of f is %f\n",f);
    printf("The value of g is %c\n",g);
    return 0;
}