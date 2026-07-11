#include <iostream>
using namespace std;

int main(){
	int cups;
	double PricePerCup, TotalPrice,DiscountedPrice ;
	 cout<<"Enter number of tea cups"<<endl;
	 cin >>cups;
	 
	 cout<<"Enter price per cup"<<endl;
	 cin>>PricePerCup;
	 
	 TotalPrice = cups*PricePerCup;
	 
	if (TotalPrice>100){
		TotalPrice = TotalPrice - (TotalPrice*0.05);
	}
	cout<<"Total price of your tea is "<<TotalPrice<<endl;
	
	return 0;
}
