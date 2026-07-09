# include <iostream>
#include <string>
using namespace std;
int main(){
	string userTea;
	int TeaQty;
	
	cout<<"Enter type of tea "<<endl;
	getline(cin,userTea);
	
	cout<<"Enter tea Quantity \n";
	cin>>TeaQty;
	
	cout << userTea;
	cout << TeaQty;
	
	return 0;
}