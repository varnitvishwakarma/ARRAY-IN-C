#include<stdio.h>

int main(){
    int array[2][4] ,i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter the element of array\n");
            scanf("%d",&array[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
