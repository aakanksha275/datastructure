#include<stdio.h>

int linearsearch(int arr[],int size,int ele){
	int i;
	for(i=0;i<=size;i++){
		if(arr[i] == ele){
		 return i;
		}
		else{
			return -1;
		}
	}
}

int main(){
	int arr[] = {2,5,28,4,5,7,18,33,48,38,1,85,8,7,89,18,71};
	int size = sizeof(arr)/sizeof(int);
	int ele;
	printf("enter element to be searched");
	scanf("%d",&ele);
	int sindex = linearsearch(arr , size ,ele);
	printf("%d is found at index %d",ele,sindex);
}
