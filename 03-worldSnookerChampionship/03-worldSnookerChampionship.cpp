#include <iostream>
#include <string>

using namespace std;

int main()
{
	string stage;
	getline(cin, stage);
	string typeTicket;
	cin >> typeTicket;
	double boughtTickets;
	cin >> boughtTickets;
	char picture;
	cin >> picture;
	double priceTicket = 0.0;

	if (stage == "Quarter final")
	{
		if (typeTicket == "Standard")
		{
			priceTicket = 55.50;
		}
		else if (typeTicket == "Premium")
		{
			priceTicket = 105.20;
		}
		else if (typeTicket == "VIP")
		{
			priceTicket = 118.90;
		}
	}
	else if (stage == "Semi final")
	{
		if (typeTicket == "Standard")
		{
			priceTicket = 75.88;
		}
		else if (typeTicket == "Premium")
		{
			priceTicket = 125.22;
		}
		else if (typeTicket == "VIP")
		{
			priceTicket = 300.40;
		}
	}
	else if (stage == "Final")
	{
		if (typeTicket == "Standard")
		{
			priceTicket = 110.10;
		}
		else if (typeTicket == "Premium")
		{
			priceTicket = 160.66;
		}
		else if (typeTicket == "VIP")
		{
			priceTicket = 400;
		}
	}

	double totalTickets = priceTicket * boughtTickets;

	if (totalTickets > 4000)
	{
		totalTickets -= 0.25 * totalTickets;
	}
	else if (totalTickets > 2500)
	{
		totalTickets -= 0.1 * totalTickets;
		if (picture == 'Y')
		{
			totalTickets += 40 * boughtTickets;
		}
	}
	else if (picture == 'Y')
	{
		totalTickets += 40 * boughtTickets;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalTickets << endl;

	return 0;
}