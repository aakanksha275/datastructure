#include<stdio.h>

void display(int arr[],int size){
	int i;
	for( i = 0 ; i< size ; i++ ){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}



int insert(int arr[] ,int size , int element, int capacity , int index){
	int i;
	if(size >= capacity){
		return -1;
	}
	else{
		for(i=size-1;i>=index;i--){
			arr[i+1]= arr[i];
		}
		arr[index] = element;
		return 1;}
}

int main(){
	int arr[100] = {7,18,25,30,35,48};
	int size = 5, element = 11 , index = 1;
	display(arr , size);
	insert (arr ,size , element,100 , index);
	size = size+1;
	display(arr , size);
	return 0;
}


