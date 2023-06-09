#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

int factorial(int num){
	int fac=1;
	if(num == 1){
		return num;
	}
	return num * factorial(num-1);
}

int main(){
	//recussion method for factorail;
	int a;
	cout<<"Enter Number Factorial You Want: ";
    cin>>a;
    cout<<"Factorial: "<<factorial(a);
	system("pause>0");
    return 0;
}
