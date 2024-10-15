#include <stdio.h>

void merge(int arr[],int f,int mid,int l){
	int temp[10],i;
	int index1 = f;
	int index2 = mid +1;
	int x = f;
	
	while(index1<=mid && index2 <= l){
		
		if(arr[index1]<=arr[index2]){
			temp[x++]=arr[index1++];
		}else{
			temp[x++]= arr[index2++];
		}
	}
	
	while(index1<=mid){
			temp[x++]=arr[index1++];
	}
	while(index2<=l){
			temp[x++]=arr[index2++];
	}
	
	for(i=f;i<=l;i++){
		arr[i]=temp[i];
	}
	
}


void mergeSort(int arr[],int f,int l){
	int mid;
	if(f<l){
		mid = (f+l)/2;
		mergeSort(arr,f,mid);
		mergeSort(arr,mid+1,l);
		merge(arr,f,mid,l);
	}
}


void main(){
	int i;
	int arr[] = {22,69,12,76,20,6};
	int max = sizeof(arr)/sizeof(arr[0]);
	
	printf("Before sorting:\n");
	for(i=0;i<max;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	mergeSort(arr,0,max-1);
	
	printf("\nAfter sorting:\n");
	
	for(i = 0;i<max;i++){
		printf("%d\t",arr[i]);
	}
}
