//static function
#include<iostream>
using namespace std;
class employee{
	int id;
	 static int count; 
	public:
		void setdata(void){
			cout<<"enter the id: " <<endl;
			cin>>id;
			count++;
		}
		void getdata(void){
			cout<<"the id  the employee is "<< id<<"and this is employee number "<<count<<endl;
		}static void getcount(void){
			cout<<"the value of count is "<<count<<endl;
		}		
};
int employee :: count; //default value 0
int main(){
	employee vishnu, rohan, lovish;
	vishnu.setdata();
	vishnu.getdata();
	employee :: getcount();
	
	rohan.setdata();
	rohan.getdata();
	employee :: getcount();
	
	lovish.setdata();
	lovish.getdata();
	employee :: getcount();
	return 0;
}
