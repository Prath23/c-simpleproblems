#include <iostream>
using namespace std;
#include <string>
int main(){
	//how many digits in a number;
	int a;
	cout<<"enter any whole number: ";
	cin>>a;
	int b=0;
	while(a>0){
		a=a/10;
		++b;
		
	}
	cout<<"no of digits are: "<<b;
    system("pause>0");
    return 0;
}
