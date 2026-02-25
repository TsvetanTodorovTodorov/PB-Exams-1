#include <iostream>
#include <string>
using namespace std;

int main()
{
	string player1, player2;
	cin >> player1 >> player2;

	int pointsPl1 = 0;
	int pointsPl2 = 0;

	string action1;
	int cardPl2;
	
	while (true)
	{
		cin.ignore();
		getline(cin, action1);
		if (action1 == "End of game")
		{
			break;
		}

		int cardPl1 = stoi(action1);
		cin >> cardPl2;

		if (cardPl1 > cardPl2)
		{
			pointsPl1 += cardPl1 - cardPl2;
		}
		else if (cardPl2 > cardPl1)
		{
			pointsPl2 += cardPl2 - cardPl1;
		}
		else if (cardPl1 == cardPl2)
		{
			cin >> cardPl1 >> cardPl2;
			cout << "Number wars!" << endl;

			if (cardPl1 > cardPl2)
			{
				cout << player1 << " is winner with " << pointsPl1 << " points" << endl;
			}
			else if (cardPl2 > cardPl1)
			{
				cout << player2 << " is winner with " << pointsPl2 << " points" << endl;
			}
			return 0;
		}

	}
	cout << player1 << " has " << pointsPl1 << " points" << endl;
	cout << player2 << " has " << pointsPl2 << " points" << endl;

	return 0;
}