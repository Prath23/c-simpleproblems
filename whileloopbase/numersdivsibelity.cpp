#include <iostream>
using namespace std;
#include <string>
int main(){
//write the numbers between 100-500 that are divible by 3 and 5
	int a=100;
	while(a<=500){
		if((a%3==0) && (a%5==0)){
			cout<<a<<endl;}
		++a;
	}	
    system("pause>0");
    return 0;
}
