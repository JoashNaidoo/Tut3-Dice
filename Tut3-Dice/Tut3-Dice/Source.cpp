#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
	int a[1000];
	srand(time(0));

	float sum = 0, rollTotal = 0, average;

	cout << "Roll Number " << "|" << " Rolled Value" << endl;
	cout << "--------------------------" << endl;

	for (int i = 0; i <= (1 + rand() % 999); i++)
	{
		a[i] = 1 + (rand() % 6);

		cout << i + 1 << "\t ---->    " << a[i] << endl;

		rollTotal += 1;
		sum += a[i];
	}
	cout << "--------------------------" << endl;

	average = (sum / rollTotal);

	cout << endl;

	cout << "Sum of rolled dice" << endl;
	cout << sum << endl;
	cout << "--------------------------" << endl;
	cout << endl;

	cout << "Total number you rolled" << endl;
	cout << rollTotal << endl;
	cout << "--------------------------" << endl;
	cout << endl;

	cout << "Average rolled number" << endl;
	cout << average << endl;
	cout << "--------------------------" << endl;
	cout << endl;

	cout << endl;
	cout << endl;

	return 0;
}
