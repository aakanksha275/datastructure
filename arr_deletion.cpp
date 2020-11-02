#include <stdio.h>

void display( int arr[] ,int size){
	int i;
	for(i = 0;i<=size ; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}

void arrdelete(int arr[],int index , int size){
	int i;
	for(i=index;i<size;i++){
		arr[i] = arr[i+1];
	}
}

int main(){
	int arr[100] ={1,8,15,23,35,48,55};
	int size = 6 , index = 1; 
	display(arr , size);
	arrdelete(arr , index , size);
	size -=1;
		display(arr , size);
}
