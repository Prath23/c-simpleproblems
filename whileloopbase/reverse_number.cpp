#include <iostream>
using namespace std;
#include <string>
int main(){
	//revesing a given number
	int num,c,rev=0;
	cout<<"Enter an Whole Number That you Want To Reverse: ";
	cin>>num;
	while(num>0){
		c=num%10;
		rev=(rev*10)+c;
		num=num/10;}
	cout<<"number"<<rev;
    system("pause>0");
    return 0;
}
