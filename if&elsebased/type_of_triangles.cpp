#include <iostream>
using namespace std;
#include <string>
int main(){
	//given values form what type of triangle
	int a,b,c;
	cout<<"Enter The Three Values of the(whole number)Sides: "<<endl;
	cin>>a>>b>>c;
	if(a==b && b==c){
		cout<<"Equilateral triangle"<<endl;
	}
	else if((a==b) && (b!=c)){
		cout<<"Isosceles Triangle"<<endl;
	}
	else{
		cout<<"It is a Scalene Regular Rriangle";
	}
	//question: what about right andle trinagel?
    system("pause>0");
    return 0;
}
