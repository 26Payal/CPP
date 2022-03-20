#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;

int main()
{

	ifstream input;
	string str;
	int count = 0;
	string k = "the" ;
	
	input.open("file.txt");			
	if(!input)			
	{
		cout << "File not found." << endl;
	}
	
	else
	{
		while(input >> str) 		
			if (str == k)		
			{
				count++;
			}
		}
		
		cout << "\nTotal no of 'the' in the file  --> " << count << endl;
	}
	
	input.close();			
	
	return 0;
}
