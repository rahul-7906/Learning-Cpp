#include <iostream>
#include <string>
using namespace std;

int main(){
	string Tea;
	cout<< "order tea" <<endl;
	getline(cin,Tea);
	
	if(Tea =="Green Tea"){
		cout<<"You ordered Green Tea" <<endl;
	}
	return 0;
}