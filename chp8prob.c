#include <stdio.h>
#include <string.h>
 int main(){
/* 2. Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal. */

// char str[6];
// //scanf("%s",str);
// for(int i=0 ; i<5 ; i++)
// {
//     scanf("%c",&str[i]);
//     fflush(stdin);
// }
// str[5]='\0';
// printf("%s",str);
// return 0;
//}

/*3. Write your own version of strlen function from <string.h>???*/

// int strlen(char str[]){
//     int i = 0;
//     while(str[i] != '\0'){
//         i++;
//     }
//     return i;
// }

// int main(){
//     char str[] = "Vampire Diaries";
//     printf("%d", strlen(str));
//     return 0;
// }

/*4. Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.*/

// char *slice(char str[], int m, int n)
// {
//     int i = 0, count;
//     char *ptr1 = &str[m];
//     char *ptr2 = &str[n];

//     str = ptr1;
//     str[n] = '\0';
//     return str;
// }
// int main()
// {
//     char str[] = "Pavani and shanu";

//     printf("%s", slice(str, 1, 7));
//     return 0;
// }

/*5. Write your own version of strcpy function from <string.h>*/


// int mystrlen(char str[])
// {
//     int i = 0, count;
//     char c = str[i];
//     while (c != '\0')
//     {
//         c = str[i];
//         i++;
//     }
//     count = i - 1;
//     return count;
// }

// void mystrcpy(char target[], char source[])
// {
//     for (int i = 0; i < mystrlen(source); i++)
//     {
//         target[i] = source[i];
//     }
//     target[mystrlen(source)] = '\0';
// }


// int main()
// {
//     char source[] = "cat and rat";
//     char target[30];
//     mystrcpy(target, source); // target now contains "cat and rat"
//     printf("%s %s", source, target);
//     return 0;
// }


/*6. Write a program to encrypt a string by adding 1 to the ascii value of its 
characters. */

//      int main(){
//      char str[]="Mujhe pizza khana ha";
//      for(int i = 0 ; i<strlen(str) ; i++){
//          str[i]= str[i]+1;
//      }
//      printf("%s",str);
//      return 0;
// }


/*7. Write a program to decrypt the string encrypted using encrypt function in 
problem 6. */

    /*int main(){
     char str[]="Nvkif!qj{{b!libob!ib";
     for(int i = 0 ; i<strlen(str) ; i++){
         str[i]= str[i]-1;
     }
     printf("%s",str);
     return 0;
}*/

/*8. Write a program to count the occurrence of a given character in a string.*/

    // char c='d';
    // int count=0;
    // char str[]="diejdnsjnefehbsugaiwuanaihvdrdugiduhdhh";
    // for(int i=0 ; i<strlen(str) ; i++){
    //     if(str[i]==c){
    //         count++;
    //     }
    // }
    // printf("%d",count);


/*9. Write a program to check whether a given character is present in a string or not. */

    char c = 'a';
    int contains = 0;
    char str[] = "Pavani";
    for(int i=0 ; i<strlen(str) ; i++){
        if(str[i]==c){
            contains=1;
            break;
        }
    }

    if(contains){
        printf("Yes it contains\n");
    }
    else{
        printf("Does not contain\n");
    }











    return 0;
}

