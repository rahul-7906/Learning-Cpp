#include <iostream>
 using namespace std;
 
 //Function declaration
 int checkTemp(int temp);
 
 int main(){
 	//function call
 	checkTemp(50);
 	checkTemp(80);
 	return 0;
 }
 
 
 
 //Function definition
 int checkTemp(int temp){
 	cout<< temp<<endl;
 	return temp;
 }
 
 
 