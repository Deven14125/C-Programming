// Write a program to reverse the elements of an array.

#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the elements of array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Reversed array: ");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}