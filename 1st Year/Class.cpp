#include<iostream>
using namespace std;
class Bird
{
	private:
		string n,s,b,c;
	public:
	Bird(string name,string size, string noise,string colour)
	{
		b=name;
		s=size;
		n=noise;
		c=colour;
	}
	void print()
	{
		cout<<n<<"\n"<<s<<"\n"<<n<<"\n"<<c<<"\n";
	  	if (s=="small")
			cout<<b<<" is a small bird";
		else
			cout<<b<<" is a big word";
	}
	~Bird(){
	}
};
int main()
{
	Bird mybird("Sparrow","small","squeak","black");
	mybird.print();
return 0;
}

