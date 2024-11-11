
#include<iostream>
using namespace std;

class Calculator 
{
	public:
		virtual int add(int a, int b) {
			return a + b;
		}
	};

int main()
{
	int arr[] = {7, 4, 5, 6, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << n;

	Calculator calc;
	int result = calc.add(10, 20);
	cout << "Result: " << result << endl;

	return 0;
}
