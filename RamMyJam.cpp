#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <thread>

using namespace std;

void one()
{
	ifstream f("rockyou1.txt");
	string s;
	for (int i = 1; i <= 3700000; i++)
	{
			getline(f, s);
			sort(s.begin(), s.end());

			
	}
	cout << "sorted"<<endl;
}
void two()
{
	ifstream f("rockyou2.txt");
	string s;
	for (int i = 1; i <= 3700000; i++)
	{
		getline(f, s);
		sort(s.begin(), s.end());


	}
	cout << "sorted"<<endl;
}
void three()
{
	ifstream f("rockyou3.txt");
	string s;
	for (int i = 1; i <= 3700000; i++)
	{
		getline(f, s);
		sort(s.begin(), s.end());


	}
	cout << "sorted"<<endl;
}
void four()
{
	ifstream f("rockyou4.txt");
	string s;
	for (int i = 1; i <= 3700000; i++)
	{
		getline(f, s);
		sort(s.begin(), s.end());


	}
	cout << "sorted"<<endl;
}

int main() {
	int x;
	cout << "x="; cin >> x;

		if (x == 1)
		{
			thread tone(one);
			thread ttwo(two);
			thread tthree(three);
			thread tfour(four);
			tone.join();
			ttwo.join();
			tthree.join();
			tfour.join();
		}
		else if (x == 0)
		{
			one();
			two();
			three();
			four();
		}
	return 0;
}