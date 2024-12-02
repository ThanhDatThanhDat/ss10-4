#include<stdio.h>

int main(){
	int arr[5]={1,3,2,5,4};
	int size = sizeof(arr)/sizeof(int);
	printf("Mang truoc khi sap sep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	for(int i=0;i<size;i++){
		int min = arr[i];
		for(int j=i+1;j<size;j++){
			min = arr[j];
			arr[j] = arr[i];
			arr[i] = min;
			j++;
		}
	}
	printf("\nMang sau khi sap sep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
