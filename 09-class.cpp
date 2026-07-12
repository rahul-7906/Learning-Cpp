#include <iostream>
#include <vector>

using namespace std;

class Chai{
	public :
	     string TeaName;
	     int TeaQty;
	     vector<string> ingredients;
	     
	     void displayChaiDetails(){
	     	cout << "Tea Name : "<< TeaName                  <<endl;
	     	cout<<"Tea quantity :"<<TeaQty<<endl;
	     	cout<<"Ingredients : ";
	     	for(string ingredient : ingredients){
	     		cout<<ingredient<<" "<<endl;
	     	}
	     }
};

int main(){
	Chai chaiOne;
	chaiOne.TeaName = "Lemon Tea";
	chaiOne.TeaQty = 5;
	chaiOne.ingredients ={"water","tea leaves","lemon"};
	
	chaiOne.displayChaiDetails( );
	return 0;
}