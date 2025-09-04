#include <stdio.h>

int main() {
    int a[10][10],c[10][10],row,col;
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

    printf("Transpose of A Matrix :\n");
    for(int i=0; i<row ; i++){
        for(int j=0; j<col; j++){
            c[j][i] = a[i][j];
        }
    }

     for(int i=0; i<row ; i++){
        for(int j=0; j<col; j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}