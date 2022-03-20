#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
	ifstream input;
	string s;
	int count=0;
	
	
	input.open("file.txt");		
	if(!input)
	{
		cout << "The file doesn't exists." << endl;
	}

	else
	{
		while(input >> s)		
		{
			if(s[0] == 'e' || s[0] == 'E')			
			{
				count++;			
			}			
		}
		
		cout << "Total no. of words starting with 'e' --> " << count << endl;
		
		
	}
	
	input.close();			
	
	return 0;
}
