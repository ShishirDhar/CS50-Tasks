
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	float L, S;
	string input;
	int index, scount = 0, lcount = 0, wcount = 1;
	bool marker = true;


	cout << "Text:";
	getline(cin, input);

	for (char c : input)
	{
		if (isalpha(c))
			lcount++;
		else if (c == ' ')
			wcount++;
		else if (c == '.' || c == '!' || c == '?')
			scount++;
	}


    L = 100.0 * lcount / wcount;
    S = 100.0 * scount / wcount;

	index = round(0.0588 * L - 0.296 * S - 15.8);


	if (index < 1)
		cout << "Before Grade 1" << endl;
	else if (index > 16)
		cout << "Grade 16+" << endl;
	else
		cout << "Grade " << index << endl;


	return 0;
}
