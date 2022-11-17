#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

template<typename T>            // this a generic based funtions

void cal(T a,T b,T c,T d,T e){
	T avg = (a+b+c+d+e)/500;
	cout<<"your average is: "<<avg<<endl;
	T per = avg*100;
	cout<<"your percentage is: "<<per;
}

int main(){
	//create a average and percentage finder via funtion
	float x,y,z,s,r;
	cout<<"ENTER YOUR 5 MARKS: "<<endl;
	cin>>x>>y>>z>>s>>r;
	cal(x,y,z,s,r);
	
    system("pause>0");
    return 0;
}
