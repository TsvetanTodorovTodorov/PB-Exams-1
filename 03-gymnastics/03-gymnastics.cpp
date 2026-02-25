#include <iostream>
using namespace std;

int main()
{
	string country, discipline;
	cin >> country >> discipline;

	double difficult = 0.0;
	double performance = 0.0;

	if (country == "Russia")
	{
		if (discipline == "ribbon")
		{
			difficult = 9.100;
			performance = 9.400;
		}
		else if (discipline == "hoop")
		{
			difficult = 9.300;
			performance = 9.800;
		}
		else if (discipline == "rope")
		{
			difficult = 9.600;
			performance = 9.000;
		}
	}
	else if (country == "Bulgaria")
	{
		if (discipline == "ribbon")
		{
			difficult = 9.600;
			performance = 9.400;
		}
		else if (discipline == "hoop")
		{
			difficult = 9.550;
			performance = 9.750;
		}
		else if (discipline == "rope")
		{
			difficult = 9.500;
			performance = 9.400;
		}
	}
	else if (country == "Italy")
	{
		if (discipline == "ribbon")
		{
			difficult = 9.200;
			performance = 9.500;
		}
		else if (discipline == "hoop")
		{
			difficult = 9.450;
			performance = 9.350;
		}
		else if (discipline == "rope")
		{
			difficult = 9.700;
			performance = 9.150;
		}
	}

	double score = difficult + performance;
	double leftScore = 20 - score;
	double percentage = (leftScore / 20) * 100;

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << "The team of " << country << " get " << score << " on " << discipline << "." << endl;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	cout << percentage << "%" << endl;

	return 0;
}