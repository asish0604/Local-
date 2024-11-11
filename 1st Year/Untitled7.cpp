#include<iostream>

using namespace std;

class Movie
{
	string Name;
	string Director;
	int YoR;
	public:
		void AddInfo();
		void ShowInfo()
		{
			cout<<"Movie: "<<Name<<"\nDirector: "<<Director<<
			"\nYear of Release: "<<YoR;
		}
};

		void Movie::AddInfo()
		{
			cout<<"\nPlease enter the name of the movie";
			cin>>Name;
			cout<<"\nPlease enter the name of the Director of the movie";
			cin>>Director;
			cout<<"Please enter the Year of Release\n";
			cin>>YoR;
		}
int main()
{
	Movie mov[10];
	int i;
	for(int i=0;i<3;i++)
	{
		mov[i].AddInfo();
	}
		for(int i;i<3;i++)
	{
		mov[i].ShowInfo();
	}
	
return 0;
}
