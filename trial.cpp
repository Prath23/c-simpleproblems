#include <iostream>
using namespace std;
#include <string>
int main(){
	/*//ACSII ENCRIPTOR
	char c1,c2,c3,c4,c5;
	cout<<"enter five letters"<<endl;
	cin>>c1>>c2>>c3>>c4>>c5;
	cout<<"ACSII MESSAGE"<<endl;
	cout<<int(c1)<<" "<<int(c2)<<" "<<int(c3)<<" "<<int(c4)<<" "<<int(c5)<<endl;
    */
    //ASCII GENERATOR
    int b=0;
    while(b<3){
    	int a;
    	cout<<"enter a integr"<<endl;
    	cin>>a;
    	cout<<"your acsii is  "<<char(a)<<endl;
    	b=b+1;
	}
    

    
    system("pause>0");
    return 0;
}
