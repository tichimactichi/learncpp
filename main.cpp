#include <iostream>
#include<iomanip>
using namespace std;

int main (){

    int first, second;

    cout << "Please enter two integers." << endl;

    cout << "First number" << setw (3) << ": ";
    cin >> first;

    cout << "Second number" << setw (2) << ": ";
    cin >> second;

    string message = first > second ? "first is greater than second" : "first is less than or equal to second";

    cout << message << endl;
    return 0;
}
