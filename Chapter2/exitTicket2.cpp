#include <iostream>

using namespace std;

int main()
{

    double gallonsOfGassoline = 0;
    double milesBeforeRefuling = 0;
    double mpg = 0;


    cout << "How many gallons of gasoline can your car hold: ";
    cin >> gallonsOfGassoline;

    cout << "How many miles does your car drive before you have to refule: ";
    cin >> milesBeforeRefuling;


    mpg = milesBeforeRefuling / gallonsOfGassoline;

    if (mpg <= 50)
    {
        cout << "Go buy a hybrid" << endl;
    }
    else{
        cout << "You already have hybrid";
    }

    cout << "The MPG of this car is: " << mpg << endl;
    return 0;
}