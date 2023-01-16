#include<stdio.h>

int main(){
    int array[2][4], Tarray[4][2], i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter the element of array\n");
            scanf("%d",&array[i][j]);
        }
    }
    printf("\nmatrix before transpose\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
      //transpose algo
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            Tarray[j][i]=array[i][j];
        }
    }

    printf("\nmatrix after transpose\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",Tarray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
