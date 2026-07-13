#include <iostream>
#include <string>

using namespace std;

class Person{
	public:
	     string name;
	     int age;
	     
	     Person(){
	     	
	     }
};

class Student : public Person{
	public:
	int rollNo;
	
	void getInfo(){
		cout << "Name : "<<name<<endl;
		cout<<"age : "<<age<<endl;
		cout<<"Roll no : "<<rollNo<<endl;
	}
};




int main(){
	Student s1;
	s1.name = "Rahul";
	s1.age = 18;
	s1.rollNo = 10;
	s1.getInfo();
	return 0;
}