#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string tournament;
	getline(cin, tournament);

	double winCounter = 0.0;
	double lostCounter = 0.0;
	double gamesInTournament = 0.0;

	while (tournament != "End of tournaments")
	{
		int numberOfGames;  //number of games in the tournament
		cin >> numberOfGames;

		for (int i = 1; i <= numberOfGames; i++)
		{
			gamesInTournament++;

			int pointsOfHost, pointsOfGuests;
			cin >> pointsOfHost >> pointsOfGuests;

			int difference = abs(pointsOfHost - pointsOfGuests);

			if (pointsOfHost > pointsOfGuests)
			{
				winCounter++;
				// Game 1 of tournament Dunkers: win with 10 points.
				cout << "Game " << i << " of tournament " << tournament << ": win with " << difference << " points." << endl;
			}
			else if (pointsOfHost < pointsOfGuests)
			{
				lostCounter++;
				cout << "Game " << i << " of tournament " << tournament << ": lost with " << difference << " points." << endl;
			}
		}
		cin.ignore();
		getline(cin, tournament);
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	double winPercentage = (winCounter / gamesInTournament) * 100;
	double lostPercentage = (lostCounter / gamesInTournament) * 100;

	cout << winPercentage << "% matches win" << endl;
	cout << lostPercentage << "% matches lost" << endl;

	return 0;
}