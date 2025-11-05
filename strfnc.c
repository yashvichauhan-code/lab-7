//Develop a function REVERSE (str) that accepts a string argument. 
//Write a C program that invokes this function to find the reverse of a given string.
#include <stdio.h>
#include <string.h>
void reverse(char str[]) {
    int len= strlen(str);
    for (int i=len ; i>=0; i--){
        printf("%c",str[i]);
    }
}
int main(){
    char arr[25];
    printf("enter string: ");
    scanf("%[^\n]", arr);
    printf("reverse is = ");
    reverse(arr);
    return 0;
}