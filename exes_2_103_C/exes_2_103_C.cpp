#include <iostream>
using namespace std;

int rafi[1];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of the element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 1))
			break;
		else
			cout << "\nArray should have maximum 1.\n\n";
	}

	cout << "\n===================\n";
	cout << " Enter array element\n";
	cout << "====================\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> rafi[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr;

	do
	{
		cout << "\nEnter the element you want to search: ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (rafi[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + 1 ) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparasion: " << ctr << endl;
		cout << "\nContinue serach (y/n): ";
		cin >> ch;

	}while((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}

