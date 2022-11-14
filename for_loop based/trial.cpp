#include <iostream>
using namespace std;
#include <string>
int main(){
	//factorial of anumber
	int number;
	cout<<"ENTER YOUR NUMBER: ";
	cin>>number;
	system("cls");
	int b=1;
	for(int a=1;a<=number;a++){     // flow of an for loop is first assing the counter "a" value
		b=b*a;                      // then it does the logiacl opration (condition) and if true executes code within
	}                               // after the execution it comes to "}" then goes to increment "a++"
	cout<<"FACTORIAL IS: "<<b;
    system("pause>0");
    return 0;
}
