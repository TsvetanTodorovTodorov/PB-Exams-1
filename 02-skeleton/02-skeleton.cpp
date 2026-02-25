#include <iostream>
using namespace std;

int main()
{
	// olympic quota for skeleton
	// inputs: quota in minutes, seconds on the control
	// ... length of the trace, seconds for 100 m
	// NB: every 120 m his time decreases with 2.5 seconds

	int minQuota, secQuota;
	cin >> minQuota >> secQuota;
	double track;
	cin >> track;
	int secFor100M;
	cin >> secFor100M;

	double timeInSecsQuota = (minQuota * 60) + secQuota;
	double timesDecreased = track / 120;
	double decreasedTime = timesDecreased * 2.5;
	double hisTime = (track / 100) * secFor100M - decreasedTime;

	cout.setf(ios::fixed);
	cout.precision(3);
	
	if (hisTime <= timeInSecsQuota)
	{
		cout << "Marin Bangiev won an Olympic quota!" << endl;
		cout << "His time is " << hisTime << "." << endl;
	}
	else {
		cout << "No, Marin failed! He was " << hisTime - timeInSecsQuota << " second slower." << endl;
	}

	return 0;
}
