#include <iostream>

using namespace std;

int main()
{
	int goal;  // first input, the goal
	cin >> goal;

	int highJump; // second input, his first jump
	cin >> highJump;

	int initialLineHigh = goal - 30;  // initial Line high

	int counterHighJumps = 0;
	int counterFailedAttempts = 0;

	while (true)
	{
		counterHighJumps++;

		if (highJump > initialLineHigh)
		{
			if (initialLineHigh == goal)
			{
				cout << "Tihomir succeeded, he jumped over " << initialLineHigh << "cm after " << counterHighJumps << " jumps." << endl;
				return 0;
			}
			initialLineHigh += 5;
			counterFailedAttempts = 0;
		}
		else
		{
			counterFailedAttempts++;
			if (counterFailedAttempts == 3)
			{
				cout << "Tihomir failed at " << initialLineHigh << "cm after " << counterHighJumps << " jumps." << endl;
				return 0;
			}
		}

		cin >> highJump; // every next jump
	}
	
	//counterHighJumps++;

	//return 0;
}

// success  unsuccess
// 231      250   <-- goal
// 205      225	  <-- every other line is his high jump
// 212		224
// 213		225
// 228		228
// 229		231
// 230		235
// 235		234
//			235
