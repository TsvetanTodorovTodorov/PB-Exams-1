#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	getline(cin, name);

	int successfulShots = 0;
	int unsuccessfulShots = 0;
	int leftPoints = 301;

	string field;
	int points;

	while (leftPoints != 0)
	{
		cin >> field;
		if (field == "Retire")
		{
			cout << name << " retired after " << unsuccessfulShots << " unsuccessful shots." << endl;
			return 0;
		}
		cin >> points;

		if (field == "Single")
		{
			if (points <= leftPoints)
			{
				leftPoints -= points;
				successfulShots++;
			}
			else
			{
				unsuccessfulShots++;
			}
		}
		else if (field == "Double")
		{
			if (points * 2 <= leftPoints)
			{
				leftPoints -= points * 2;
				successfulShots++;
			}
			else
			{
				unsuccessfulShots++;
			}
		}
		else if (field == "Triple")
		{
			if (points * 3 <= leftPoints)
			{
				leftPoints -= points * 3;
				successfulShots++;
			}
			else
			{
				unsuccessfulShots++;
			}

		}

	}
	cout << name << " won the leg with " << successfulShots << " shots." << endl;

	return 0;
}
