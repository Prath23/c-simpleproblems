#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

int factorial(int num){
	int fac=1;
	if(num==1){
		return num;
	}
	return num*factorial(num-1);
}

int main(){
	//recussion method for factorail;
	int a;
	cout<<"What Number's Factorial do you Want: ";
    cin>>a;
    cout<<"Factorial is: "<<factorial(a);
	system("pause>0");
    return 0;
}
