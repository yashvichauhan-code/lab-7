//Develop a function REVERSE (str) that accepts a string argument. 
//Write a C program that invokes this function to find the reverse of a given string.
#include <stdio.h>
#include <string.h>
void reverse(char str[]){
    int len=strlen(str);
    printf("revrsed string is: ");
    for(int i=len; i>=0; i--){
        printf("%c", str[i]);
    }
}
int main(){
    char str[20];
    printf("enter a string: ");
    scanf("%[^\n]", str);
    reverse(str);
    return 0;
}