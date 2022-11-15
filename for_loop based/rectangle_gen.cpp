#include <iostream>
using namespace std;
#include <iomanip>       // a libary we use for spacing
#include <string>
int main(){
	//create a rectangel from symbols taking parameters from users
	char s;
	cout<<"WELCOME TO RECTANGLE CREATOR";
	cout<<""<<endl;
	cout<<"enter the symobl with which you want to create the rectangel: ";
	cin>>s;
	int h,w;
	cout<<"Enter the height(whole number): ";
	cin>>h; 
	cout<<"Enter the width(whole number): ";
	cin>>w;
	for(int i=1;i<=h;i++){
		for(int a=1;a<=w;a++){       // can this be done using while loop? if so then why is for used rather than while loop?
			cout<<setw(4)<<s;    // the funtion "setw()" comes from the iomanip libary basiclly it give space before printing "s" basically beuatifiy
		}
		cout<<""<<endl;             // this is important as if not u will not get any rectangle instead u will get straight line
	} 
	
    system("pause>0");
    return 0;
}
