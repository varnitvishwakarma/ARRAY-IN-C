#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("%d", arr[i]);
    printf("\n");
  }
}

int intinsertion(int arr[], int size, int element, int capacity, int index){
   if(size>=capacity){
    return -1;
   }
   for(int i=size-1;i>index;i--){
    arr[i+1]=arr[i];
   }
    arr[index]=element;
    return 1;
   }

int main(){
 int arr[100] = {7,8,55,85,155};
 int size = 5 , element = 45 , index = 3 , capacity = 100;
 display (arr,size);

intinsertion(arr,size,element,capacity,index);
size += 1;
printf("\n");
display (arr,size);
return 0;
}
