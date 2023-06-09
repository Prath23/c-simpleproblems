#include <iostream>
using namespace std;
#include <string>
int main(){
	//number is even_odd;
	
	cout<<"Enter your Desired Number: "<<endl;
	int a;
	cin>>a;
	if(a%2==0){
		cout<<"Number is Even"<<endl;
	}
	else{
		cout<<"Number is Odd";
	}
	
	/* this is from while loop so u can do this infinte times without the program being terminated
    while(true){
    	cout<<"enter your desired number: "<<endl;
		int a;
		cin>>a;
		if(a%2==0){
			cout<<"number is even"<<endl;
		}
		else{
			cout<<"number is an odd";
		}
    	
	}*/

    
    system("pause>0");
    return 0;
}
