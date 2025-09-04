#include <stdio.h>

int main() {
    int x,y,z,temp;
    printf("Hello, World!\n");
    printf("Enter x = ");
    scanf("%d",&x);

    printf("Enter y = ");
    scanf("%d",&y);

    printf("Enter z = ");
    scanf("%d",&z);
    temp = x;
    x=y;
    y=z;
    z=temp;
        printf("------swap------------\n",x);

    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    
    return 0;
}