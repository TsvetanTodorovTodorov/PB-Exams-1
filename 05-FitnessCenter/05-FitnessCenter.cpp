#include <iostream>
#include <string>

using namespace std;

int main()
{
	// the goal is to calculate the number of
	// ppl that goes to the fitness
	int people; // number of ppl for a day
	cin >> people;
	cin.ignore();

	// every other input is info what every person
	// is doing

	int back = 0;
	int chest = 0;
	int legs = 0;
	int abs = 0;
	int proteinShake = 0;
	int proteinBar = 0;
	double workOut = 0.0;
	double protein = 0.0;

	string goal;

	for (int i = 1; i <= people; i++)
	{
		getline(cin, goal);

		if (goal == "Back")
		{
			back++;
			workOut++;
		}
		else if (goal == "Chest")
		{
			chest++;
			workOut++;
		}
		else if (goal == "Legs")
		{
			legs++;
			workOut++;
		}
		else if (goal == "Abs")
		{
			abs++;
			workOut++;
		}
		else if (goal == "Protein shake")
		{
			proteinShake++;
			protein++;
		}
		else if (goal == "Protein bar")
		{
			proteinBar++;
			protein++;
		}
	}

	double percentageWorkout = (workOut / people) * 100;
	double percentageProtein = (protein / people) * 100;

	cout << back << " - back" << endl;
	cout << chest << " - chest" << endl;
	cout << legs << " - legs" << endl;
	cout << abs << " - abs" << endl;
	cout << proteinShake << " - protein shake" << endl;
	cout << proteinBar << " - protein bar" << endl;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << percentageWorkout << "% - work out" << endl;
	cout << percentageProtein << "% - protein" << endl;
		

	return 0;
}