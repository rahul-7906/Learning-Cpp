#include <iostream>
#include <string>

using namespace std;

int main(){
	int teacups;
	cout<< "Enter number of tea cups available : ";
	cin>>teacups;
	
	while(teacups > 0){
		teacups--;
			cout<<"Serving a cup of tea \n"
			<<   teacups <<"  remaining"<<endl;
		
	}
	cout<<"All teacups are served";
	
	
	return 0;
}