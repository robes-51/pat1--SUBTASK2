//MAROBE TSM
//LEVEL 3 PA
#include <iostream>

using namespace std;

int main()
{
     //inputs
     int firstTemp, secondTemp, thirdTemp;

    //first reading
    cout << "Enter the first temperature reading: ";
    cin >> firstTemp;

    //second reading
    cout << "Enter the second temperature reading: ";
    cin >> secondTemp;

    // Check increase from first to second reading
    if (secondTemp - firstTemp > 50)
    {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    }
    else if (secondTemp - firstTemp < 10)
    {
        cout << "Increase the Fryer heat before taking the third reading." << endl;
    }

    // Input third reading
    cout << "Enter the third temperature reading: ";
    cin >> thirdTemp;

    // Check final oil temperature range
    if (thirdTemp >= 150 && thirdTemp <= 190)
    {
        cout << "You may start frying the Magwinyas." << endl;
    }
    else
    {
        cout << "Oil is not ready for frying!" << endl;

    }
    return 0;
}
