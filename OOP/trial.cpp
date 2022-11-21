#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <list>
class food{
	
public:
	
	string name;
	string taste;
	float price;
	
	food(string Nme,string tst,int a){
		name=Nme;
		taste=tst;
		price=a;
	}
	void output(){
		cout<<"the fruit is: "<<name<<endl;
		cout<<"it has a " <<taste<<" taste"<<endl;
		cout<<"price: "<<price<<endl;
		cout<<"";
	}		
};
int main(){
	//
	food fruit("mango","sweet/sour",300);
	fruit.output();
	food fruit2("watermellon","watery sweet",50);
	fruit2.output();
	system("pause>0");
    return 0;
}
