// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ans;
    int indexNum;
    float side, areaSq, periSq;
    float len, wid, areaRec, periRec;
calc:
    cout << "\n Choose a number from the following to get relevant calculators \n \n";
    cout << "\n 1. Square " << "\n 2. Rectangle" << " \n 3. Exit \n \t \t";

    cin >> indexNum;

    if (indexNum == 1) {
        // cout << string(50, '\n');
        cout << "\n Enter the side of a square in cm \t";
        cin >> side;
        areaSq = side * side;
        periSq = 4 * side;

        cout << " \n The area of square = \t" << areaSq << " sq.cm";
        cout << " \n The perimeter of square = \t" << periSq << " sq.cm";


    }
    else if (indexNum == 2) {
        //cout << string(50, '\n');
        cout << "\n Enter the length and width of a rectangle in cm \t";
        cin >> len >> wid;
        areaRec = len * wid;
        periRec = 2 * (len + wid);
        cout << " \n The area of retangle = \t" << areaRec << " sq.cm";
        cout << " \n The perimeter of rectangle = \t" << periRec << " sq.cm";


    }
    else if (indexNum == 3) {
        return 0;
    }
    cout << " \n Do you wish to continure ? (y / n)\t";
    cin >> ans;
    if (ans == 'y') {
        goto calc;
    }
    return 0;
}
