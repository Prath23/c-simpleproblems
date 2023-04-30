#include <iostream>
using namespace std;
#include<string>
//add an elemnt in the array at the end
class arrOPP{
	public:
		void addEelemnt(string arr[],int size,string f){
			arr[size-1]=f;                               //this will add element in the last place of the array
	
		}
};





int main(){
	string a[4]={"max","app","jhon"};          //remmeber to create an array with greater size to abel to add elemnets into it as array is satitic
	string miss;
	cout<<"add the missing person name: ";
	cin>>miss;
	int j=sizeof(a)/sizeof(a[0]);// this is done as the sizeof() will mulltipy size with byte: 5*4
	arrOPP addElementLast;
	addElementLast.addEelemnt(a,j,miss);
	for(int i=0;i<j;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
