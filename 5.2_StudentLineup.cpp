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
		count++;
	}

	cout << endl << "Number of students: " << count << endl;
	iFile.close();

}