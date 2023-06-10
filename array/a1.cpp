#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <list>
#include <stdio.h>

int main() {
	//array and it's address of each value
	int a[4]= {1,2,3,4};  // here we have stored 4 values and each have a memory space value.
	for(int i=0;i<4;i++){
		int* p=&a[i]; // each value of array is stored in a memory and has it's own address.
		cout<<"memory values are: "<<p<<endl;   
	//output			
        /*memory values are: 0x6ffe00
	  memory values are: 0x6ffe04
	  memory values are: 0x6ffe08
          memory values are: 0x6ffe0c  */
	}	
	
    return 0;
}
