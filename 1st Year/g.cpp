//static variable or class variable
#include<iostream>
using namespace std;
class employee{
	int id;
	 static int count; //    only one variable shared by three objects
	public:
		void setdata(void){
			cout<<"enter the id: " <<endl;
			cin>>id;
			count++; //cout is static data members of employee
		}
		void getdata(void){
			cout<<"the id  the employee is "<< id<<"and this is employee number "<<count<<endl;
		}
};
int employee :: count=1000; //default value 0
int main(){
	employee vishnu, rohan, lovish;
	vishnu.setdata();
	vishnu.getdata();
	
	rohan.setdata();
	rohan.getdata();
	
	lovish.setdata();
	lovish.getdata();
	return 0;
}
