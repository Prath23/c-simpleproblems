#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
int main(){
	//create a triangle with height and base from user
	cout<<"WELCOME TO TRIANGLE GENRATOR";
	
	char s;
	int height, base;
	cout<<"enter height length: ";
	cin>>height;
	cout<<"enter base length: ";
	cin>>base;
	cout<<"your symbol genrator";
	cin>>s;
	char b;
	for(int a=1;a<=height;a++){
		for(int i=1;i<=a;i++){
			cout<<s;
		}
		cout<<""<<endl;
	}
    system("pause>0");
    return 0;
}
