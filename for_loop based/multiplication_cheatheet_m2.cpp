#include <iostream>
using namespace std;
#include <string>
int main(){
	//create a visual multipicaltion tabel sheet:
	
	cout<<"              ********WELCOME TO TABEL GENERATOR********       "<<endl;
	cout<<""<<endl;
	int n;
	cout<<"enter number upto which the multiplication sheet need to be form: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<""<<endl;
		for(int a=1;a<=10;a++){
			
			cout<<i<<" x "<<a<<" = "<<i*a<<endl;   //has creation of cheat sheet but time complexity O(n^2)? Y/N?
		}
	}
	
	
    system("pause>0");
    return 0;
}
