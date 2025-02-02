#include<iostream>
using namespace std;
class movie
{
	private:
		string n,d;
		int y;
		static int count;
	public:
		void addinfo();
		movie(string name,string dir,int year)
		{
			n=name;
			d=dir;
			y=year;
		}
	void show_value()
	{
		cout<<n<<d<<y;
	}
};

	void movie::addinfo()
	{
		cout<<"Enter name of movie\n";
			cin>>n;
		cout<<"Enter name of the Director \n";
			cin>>d;
		cout<<"Enter year of Release of movie";
			cin>>y;
		
	}
int main()
{
	movie top;
	top.addinfo();
	top.show_value;
}

	
