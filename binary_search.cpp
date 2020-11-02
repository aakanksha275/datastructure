#include<stdio.h>

int binarysearch(int arr[],int size , int ele){
	int low,mid,high;
	low = 0;
	high = size-1;
	while(low<=high){
		mid = (low+high)/2;
		if(arr[mid] == ele){
			return mid;
		}
		if(mid<ele){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return -1;
}

int main(){
	int arr[] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int size = sizeof(arr)/sizeof(int);
	int ele;
	printf("enter element to be searched");
	scanf("%d",&ele);
	int sindex = binarysearch(arr , size ,ele);
	printf("%d is found at index %d",ele,sindex);	 	
}
