#include <iostream>
using namespace std;
#include<string>
//create unsorted array and find the if the elemnt exist in it

int find(int arr[],int n,int j){
	for(int i=0;i<n;i++){
		if(arr[i]==j){
			return i;
		}
		return -1;
	}
}
int main(){
	int a[]={2,5,8,4,7};
	int s= sizeof(a);
	int j;
	cout<<"Enter The Number That You Think In The Array: \n";
	cin>>j;
	int output=find(a,s,j);
	if(output==-1){
		cout<<"The Number Is Not In The Array"<<endl;
		
	}
	else{
		cout<<"Element\t"<<a[output]<<" Exists at Index: "<<output+1<<endl;
	}
	return 0;
}
