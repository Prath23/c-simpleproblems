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
		cout<<"The Fruit Is: "<<name<<endl;
		cout<<"It Has A " <<taste<<" Saste"<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"";
	}		
};
int main(){
	//
	food fruit("Mango","Sweet/Sour",300);
	fruit.output();
	food fruit2("Watermelon","Watery Sweet",50);
	fruit2.output();
	system("pause>0");
    return 0;
}
