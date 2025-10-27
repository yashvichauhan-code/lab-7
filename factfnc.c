//Develop a recursive and non-recursive function FACT(num) 
//to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. 
//Otherwise, FACT(n) = n * FACT(n-1). Using this function, WAP to compute the binomial coefficient. 
//Tabulate the results for different values of n and r with suitable messages.
#include <stdio.h>
/*int f=1;
int fact(int n){
    for(int i=1; i<=n; i++){
        f= f*i;
    }
    return f;
}
int main(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    printf("factorial is %d",f);
    return 0;
}*/
int fact(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n, result;
    printf("enter number: ");
    scanf("%d", &n);
    printf("factorial is %d",fact(n));
    return 0;
}