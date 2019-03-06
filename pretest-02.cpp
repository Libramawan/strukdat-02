/*
Nama	: Prayudha Adhitia Libramawan
NPM		: 140810180008
Tanggal	: 06-03-2019
PreTest-02
*************************************/

#include <iostream>
using namespace std;

void moveZeroToBeginning(int arr[], int n){
	int temp;
		for(int i=0; i<n; i++)
		{
			if(arr[i] == 0){
				temp = arr[i];
				arr[0]= arr[i];
				arr[i]=temp;
			}
		}
}

void input(int (&arr)[100], int& n){
	cout<<"Masukkan Panjang data : "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Masukkan data : "; cin>>arr[i];
	}
}

void output(int arr[], int n){
	for (int i=0; i<n;i++){
		cout<<arr[i];
	}
	
}

int main(){
	int arr[100];
	int n;
	input(arr,n);
	moveZeroToBeginning(arr,n);
	output(arr,n);
}
