#include <iostream>
#include <string>
using namespace std;

int main()
{
	// football team plays in tournament for charity, 3 matches.
	// write a program that calculates how many
	// wins
	// even
	// losses
	// the team has
	// as a host first result is his. Ex: 3:1. They scored 3 goals

	// 3 inputs -> 3:1 , 0:2 , 0:0 . the number of goals will always be single digit

	int counterWins = 0;
	int counterEven = 0;
	int counterLosses = 0;

	for (int i = 0; i < 3; i++)
	{
		string result;
		cin >> result;

		if (result[0] > result[2])
		{
			counterWins++;
		}
		else if (result[0] == result[2])
		{
			counterEven++;
		}
		else if (result[0] < result[2])
		{
			counterLosses++;
		}
	}

	cout << "Team won " << counterWins << " games." << endl;
	cout << "Team lost " << counterLosses << " games." << endl;
	cout << "Drawn games: " << counterEven << endl;

	return 0;
}