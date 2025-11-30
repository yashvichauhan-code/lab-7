//Develop a C function ISPRIME (num) that accepts an integer argument and 
//returns 1 if the argument is prime, a 0 otherwise. 
//WAP that invokes this function to generate prime numbers between the given ranges.
#include <stdio.h>
int isprime(int n){
    if (n <= 1)
        return 0;
    for(int i=2; i*i<=n; i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int s,e, result;
    printf("enter starting num: ");
    scanf("%d", &s);
    printf("enter ending num: ");
    scanf("%d", &e);
    for (int i=s; i<=e; i++){
        result = isprime(i);
        if(result==1){
            printf("%d is prime.\n", i);
        }
        else if (result==0){
            printf("%d is not prime.\n", i);
        }
    }
    return 0;
}