#include<stdio.h>


int main (){
int array[10];

for(int i=0;i<10;i++){
    printf("ENTER THE ELEMENT OF ARRAY:");
    scanf("%d",&array[i]);
}

for(int i=0;i<10;i++){
    printf("ELEMENTS OF ARRAY:");
    printf("%d\n",array[i]);
}

return 0;

}
