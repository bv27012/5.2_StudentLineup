//The comment line will go here soon.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream iFile;
	string name, first, last;
	int count = 0;
	iFile.open("LineUp.txt");

	while (iFile >> name)
	{
		cout << name << endl;
		if (count == 0)
		{
			first = last = name;
		}
		else
		{
			if (name < first)
				first = name;

			if (name > last)
				last = name;
		}
		count++;
	}

		if (!iFile.is_open())
		{
			cout << "ERROR: File not found." << endl;
			return 1;
		}

	cout << endl << "Number of students: " << count << endl << endl;
	cout << "Alphabetical Order" << endl << "-------" << endl;
	cout << "First: " << first << endl;
	cout << "Last: " << last << endl;
	iFile.close();

}