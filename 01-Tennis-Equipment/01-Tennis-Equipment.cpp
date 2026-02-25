#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double priceTennisRocket; // maybe double? will see
	cin >> priceTennisRocket;
	int numTennisRockets, numPairSneakers;
	cin >> numTennisRockets >> numPairSneakers;

	int rocketsTotalPrice = priceTennisRocket * numTennisRockets;
	double pricePairSneakers = priceTennisRocket / 6;
	double sneakersTotalPrice = pricePairSneakers * numPairSneakers;

	double otherEquipment = 0.2 * (rocketsTotalPrice + sneakersTotalPrice);

	double totalPrice = rocketsTotalPrice + sneakersTotalPrice + otherEquipment;

	double djokovicPay = 0.125 * totalPrice;
	double sponsorsPay = 0.875 * totalPrice;

	cout << "Price to be paid by Djokovic " << floor(djokovicPay) << endl;
	cout << "Price to be paid by sponsors " << ceil(sponsorsPay) << endl;

	return 0;
}
