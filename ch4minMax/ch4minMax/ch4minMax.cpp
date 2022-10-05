// ch4minMax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Ch 4 Min Max by Kevin Bell\n\n";
    auto number = 0, number2=0,largerNumber=0, smallerNumber=0;
    cout << "Please enter a number: ";
    cin >> number;
    cout << "Please enter another number: ";
    cin >> number2;
    cout << "" << endl;
    if (number > number2) {
        largerNumber = number;
            smallerNumber = number2;
    }
    else
    {
        largerNumber = number2;
        smallerNumber = number;
    }
    cout << "Larger number: " << largerNumber << endl;
    cout << "Smaller number: " << smallerNumber << endl;
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
