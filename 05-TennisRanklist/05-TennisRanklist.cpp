#include <iostream>
#include <string>

using namespace std;

int main()
{
	int tournaments, initialPoints;
	cin >> tournaments >> initialPoints;
	double pointsFromTournaments = 0;
	double wins = 0.0;
	string stage;

	for (int i = 0; i < tournaments; i++)
	{
		cin >> stage;

		if (stage == "W")
		{
			pointsFromTournaments += 2000;
			wins++;
		}
		else if (stage == "F")
		{
			pointsFromTournaments += 1200;
		}
		else if (stage == "SF")
		{
			pointsFromTournaments += 720;
		}
	}
	int avr = pointsFromTournaments / tournaments;
	double percentageOfWins = (wins / tournaments) * 100;

	cout << "Final points: " << initialPoints + pointsFromTournaments << endl;
	cout << "Average points: " << avr << endl;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << percentageOfWins << "%" << endl;	

	return 0;
}
