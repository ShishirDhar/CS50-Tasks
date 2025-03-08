
#include <iostream>
#include <cctype>
#include <string>
const char arr[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const int narr[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

using namespace std;
void checkScore(string uinput1, string uinput2);
int main()
{

	string fuser_input, suser_input;
	cout << "Player 1:";
	cin>>fuser_input;
	cout << "Player 2:";
	cin>>suser_input;

	checkScore(fuser_input, suser_input);


	return 0;
}

void checkScore(string uinput1, string uinput2)
{
	int countp1 = 0, countp2 = 0;

	for(int i = 0; i< uinput1.length(); i++)
	{
		for(int j = 0; j< 26; j++)
		{
			if(tolower(uinput1[i]) == tolower(arr[j]))
			{
				countp1+=narr[j];
			}
		}
	}

	for(int i = 0; i< uinput2.length(); i++)
	{
		for(int j = 0; j< 26; j++)
		{
			if(tolower(uinput2[i]) == tolower(arr[j]))
			{
				countp2+=narr[j];
			}
		}
	}

	if(countp1<countp2)
	{
		cout<< "Player 2 wins!!";
	}
	else if(countp1 > countp2)
	{
		cout << "Player 1 wins!!";
	}
	else
	{
		cout<< "Tie!";
	}
}
