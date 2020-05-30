#include<stdio.h>
int main(){
    int n;
    fact(n);
    scanf("%d",&n);
    printf("%d",fact(n));
}
int fact(n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
