#include <iostream>
#include <string>

using namespace std;

class Teacher{
	private:
	 int salary;
	public:
	     string name;
	     int age;
	     string subject;
	     
	     void changeSubject(string newSubject){
	     subject = newSubject;
	     }
	     
	     // setter 
	     void setSalary( int s){
	     	salary = s;
	     }
	     
	     // getter 
	     int getSalary(){
	     	return salary;
	     }
};

int main(){
	Teacher t1;
	t1.name = "Shradha";
	t1.age = 23;
	t1.subject = "Cpp";
	t1.setSalary(25000);
	
	cout<<t1.name <<endl;
	cout<<t1.getSalary();
	return 0;
}