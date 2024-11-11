#include<iostream>
using namespace std;
class Pornstar
{
	private:
		string n,s,c,r,d;
	public:
		Pornstar(string name,string boobsize,string colour,string race, string duration)
		{
			n=name;
			s=boobsize;
			c=colour;
			r=race;
			d=duration;
		}
		void print()
		{
			cout<<n<<"\n"<<s<<"\n"<<r<<"\n"<<c<<"\n"<<d<<"\n";
		  	if (s=="big" && r=="latina")
				cout<<n<<" fuck me";
			else
				cout<<n<<" fuck off";
		}		
};
int main()
{
	Pornstar mypornstar("Pamela Rios","big","white","latina","very long");
	mypornstar.print();
return 0;
}

