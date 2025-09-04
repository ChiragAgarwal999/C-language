#include <stdio.h>

int main() {
    int a;
    char cal;
    printf("Enter n.o of years : ");
    scanf("%d",&a);
    printf("Calculate D/H/M : ");
    scanf(" %c",&cal);

    switch(cal){
        case 'D':
            printf("Total Days :%d",a*365);
            break;
        case 'H':
            printf("Total Hours :%d",a*365*24);
            break;
        case 'M':
            printf("Total Days :%d",a*365*24*60);
            break;
    }

    return 0;
}