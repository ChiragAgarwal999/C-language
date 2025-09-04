#include <stdio.h>

int main() {
    int x,y,z;
    printf("Hello, World!\n");
    printf("Enter x = ");
    scanf("%d",&x);

    printf("Enter y = ");
    scanf("%d",&y);

    printf("Enter z = ");
    scanf("%d",&z);
    // x = y ^ x;
    // y = y ^ x;
    // x = y ^ x;

    x = y+x;
    y = x-y;
    x = x-y;

    y = z+y;
    z = y-z;
    y = y-z;
    // printf("p1 %d - %d", x, y);
    // y = z ^ y;
    // z = z ^ y;
    // y = z ^ y;
    // printf("p2 %d - %d", x, y);

    printf("------swap----------\n");

    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    
    return 0;
}