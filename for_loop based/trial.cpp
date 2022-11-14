#include <iostream>
using namespace std;
#include <string>
int main(){
	//create a visual multipicaltion tabel for any given number entered by the user:
	float number;
	cout<<"              ********WELCOME TO TABEL GENERATOR********    "<<endl;
	
	cout<<"enter the number whoes tabel u want to genrate: ";
	cin>>number;
	for(int i=1;i<=10;i++){
		cout<<number<<" x "<<i<<" = "<<number*i<<endl;  // this is done via a single for loop usually u find it has 
	}                                                   //nested for loop but again beware of complexity that comes with it.
	
    system("pause>0");
    return 0;
}
