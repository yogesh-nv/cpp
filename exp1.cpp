#include<iostream>
using namespace std;
inline int max(int a, int b){
	return (a>b)?a:b;
}
inline int min(int a, int b){
	return (a<b)?a:b;
}
int findLargeSmall(int arr[], int size){
	int small,large,large2;
	small=large=large2=arr[0];
	for(int i=1;i<size;i++){
		large=max(arr[i],large);
	}
	for(int i=1;i<size;i++){
		small=min(arr[i],small);
	}
	for(int i=1;i<size;i++){
		if(arr[i]!=large)
		large2=max(large2,arr[i]);
	}
	cout<<"The largest number is "<<large<<"\nThe smallest num is "<<small<<"\nThe 2nd largest num is "<<large2;
	return 0;
}
int main()
{
	int size;
	cout<<"Enter the size of an array\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the array elements\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	findLargeSmall(arr,size);
	return 0;
}