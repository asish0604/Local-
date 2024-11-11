#include<iostream>

using namespace std;

class Movie
{
	string Name;
	string Director;
	int YoR;
	static int count;  //count will keep a count on the number of movies
	public:
		void AddInfo();
		void ShowInfo()
		{
			cout<<"Movie: "<<Name<<"\nDirector: "<<Director<<
			"\nYear of Release: "<<YoR;
			//cout<<"Total number of movies added: "<<count<<endl;
		}
		static void ShowCount()//A static member function can access only static data members
		{
			cout<<"Total movies added : "<<count<<endl;
		}
};
int Movie::count=100;

		void Movie::AddInfo()
		{
			count++;
			cout<<"\nPlease enter the name of the movie";
			cin>>Name;
			cout<<"\nPlease enter the name of the Director of the movie";
			cin>>Director;
			cout<<"Please enter the Year of Release\n";
			cin>>YoR;
		}

int main()
{
	Movie mov1, mov2; //Object instantiation
	mov1.AddInfo();
	mov1.ShowInfo();
	mov2.AddInfo();
	mov2.ShowInfo();
	Movie::ShowCount();//Here we are using the :: to access the static member function
	return 0;
}
