#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
float average(float m1,float m2,float m3,float m4,float m5){
	float c=(m1+m2+m3+m4+m5)/500;
	
	return c;
}
float percentage(float a1){
	return a1*100;
}
int main(){
	//create a average and percentage finder via funtion
	float a,b,d,e,f;
	cout<<"Enter marks of your 5 subjects"<<endl;
	cin>>a>>b>>d>>e>>f;
	float avg= average(a,b,d,e,f);
	cout<<"ur average: "<<avg<<endl;
	float per= percentage(avg);
	cout<<"ur percentage: "<<per<<"%"<<endl;
	
    system("pause>0");
    return 0;
}
