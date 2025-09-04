#include <stdio.h>
int fact(int n ){
    if(n<=0) return -1;
    int result=1;
    for(int i=1 ; i<=n;i++){
        result*=i;
    }
    return result;
}
int main() {
    // Write your code here
    int n;
    printf("Enter n.o of which you want factorial : ");
    scanf("%d",&n);
    printf("Factorial : %d",fact(n));
    return 0;
}


