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
			int n = s.length();		
			
			for(int i = 0; i < n;i++)		
			{
				if(s[i] == 'a' || s[i] == 'A')
				{
					count++;			
					break;
				}
			}
			
		}
		
		cout << "Total no. of words having 'a' --> " << count << endl;
		
		
	}
	
	input.close();			
	
	return 0;
