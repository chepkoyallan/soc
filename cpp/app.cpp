#include <iostream>

using namespace std;

int main(){

    cout << "Calculating the are of the house: \n";
    cout << "Enter the lenth of the house: \n";
    int house_length = {0};
    cin >> house_length;
    cout << "The legth of the ouse has been set to: " << house_length;
    cout << "Enter the width of the house: \n";
    int house_width = {0};
    cin >> house_width;
    cout << "The width of the house has been set to:\n " << house_width << endl;
    cout << "The area of the house is: " << house_length * house_width << endl;
    return 0;
}