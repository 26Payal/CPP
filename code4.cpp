#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
	ifstream input;
	string str;
	int count=0;
	
	
	input.open("file.txt");		

	if(!input)
	{
		cout << "The file doesn't exists." << endl;
	}

	else
	{
		while(input >> str)		
		{
			int n = str.length();			
			
			if(str[n-1] == 's' || str[n-1] == 'S')			
			{
				count++;			
			}			
		}
		
		cout << "Total no. of words ending with 's' --> " << count << endl;
		
		
	}
	
	input.close();			
	
	return 0;
}
