#include <stdio.h>
#include <string.h>
int main() {
    int n=0,a=0;
    printf("Calculator\n");
    scanf("%d",&n);
    char op;
    scanf("%s",&op);
    while(n){
        switch (op)
        {
        case '*':
            scanf("%d",&a);
            printf("%d",a);
             n*=a;
                          printf("%d",n);
        case 'e':
        printf("fdkfjdkf");
            break;
        }
    }
    printf("Result %d",n);
    return 0;
}