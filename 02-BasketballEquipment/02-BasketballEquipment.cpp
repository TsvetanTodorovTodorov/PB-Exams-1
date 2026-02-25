#include <iostream>
using namespace std;

int main()
{
    int annualTax;
    cin >> annualTax;

    // sneaker;
    double sneakers = annualTax - (0.4 * annualTax);
    
    //equipment;
    double equipment = sneakers - (0.2 * sneakers);

    // ball;
    double ball = 0.25 * equipment;

    // accessories;
    double accessories = 0.2 * ball;

    double expenses = annualTax + sneakers + equipment + ball + accessories;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << expenses << endl;

	return 0;
}