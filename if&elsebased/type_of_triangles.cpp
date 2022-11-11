#include <iostream>
using namespace std;
#include <string>
int main(){
	//given values form what type of triangle
	int a,b,c;
	cout<<"Enter three values of the (whole number)sides: "<<endl;
	cin>>a>>b>>c;
	if(a==b && b==c){
		cout<<"equilateral triangle"<<endl;
	}
	else if((a==b) && (b!=c)){
		cout<<"isoslese triganel"<<endl;
	}
	else{
		cout<<"it is an regular triangle";
	}

	//question: what about right andle trinagel?
    
    system("pause>0");
    return 0;
}
