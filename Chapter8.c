// STRINGS
#include <stdio.h>
#include <string.h>   //header file is used while using string functions. 
int main()
{
    // char st[]={'a','b','c','\0'};   //in single string add null character.
    //char st[] = "abc"; // same as doing char st[]={'a','b','c','\0'}
    // When we use double quotes in strings then no requirement to add null character.
    //for (int i = 0; i < 3; i++)
    // i<=3 will add null character to your output.
    //{    
        //printf("Character is %c \n", st[i]);
    //}

    //printf("%s",st);  //format specifier for string.


    // char st[4];
    // scanf("%c", st);   //automatically a null character is added bye specifier.
    // printf("%c", st);

//using gets.

    //char st[30];
    //gets(st);     //it prints string but at the end of the same line.
//instead of gets should use fgets. Due to buffer overflow.
    //printf("%s", st);

    //puts(st);     //prints the string and place the cursor to the next line.
    //printf("Hey");    


//STRING FUNCTIONS

    char st[]={"Pavani"};
    //printf("%d", strlen(st));    //excludes null character.

    char source[] = "Harsh "; 
    char target[30]; 
    strcpy(target,source);  //target now contains "harsh"
    //printf("%s %s", st, target);

    char s1[12] = "hello"; 
    char s2[] = "harry"; 
    strcat(s1,s2); // s1 now contains "helloharry" <no space in between> 

    char a1[56]="Elenaa!!";
    char a2[56]="Stefan!!";
    strcat(a1,a2);
    //printf("%s %s",a1,a2);

    int a= strcmp("deep","joke");   //DJ is negative.
    printf("%d",a);





    return 0;
}