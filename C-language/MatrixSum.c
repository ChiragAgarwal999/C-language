#include <stdio.h>

int main() {
    int a[10][10],b[10][10],c[10][10],row,col;
    printf("Enter n.o of rows : ");
    scanf("%d",&row);

    printf("Enter n.o of cols : ");
    scanf("%d",&col);

    for(int i=0; i<row ; i++){
        for(int j=0; j<col; j++){
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<row ; i++){
        for(int j=0; j<col; j++){
            printf("Enter b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of Matrix A & B :\n");
    for(int i=0; i<row ; i++){
        for(int j=0; j<col; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}