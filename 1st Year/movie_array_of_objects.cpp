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

		/**
		 * Adds information about a movie.
		 * Prompts the user to enter the name of the movie, the name of the director, and the year of release.
		 */
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
	Movie mov[10]; //Array of objects
	int i;
	for(i=0;i<3;i++)
	{
		mov[i].AddInfo();
	}
	for(i=0;i<3;i++)
	{
		mov[i].ShowInfo();
	}
	return 0;
}


