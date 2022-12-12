// DecideChangeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float total = 0.00, tendered = 0.00, tax = 0.0925, taxAmnt = 0.00, amntLeft = 0.00, finalTotal = 0.00;
    int fiftyDol = 0, twentyDol = 0, tenDol = 0, fiveDol = 0, oneDol = 0, quartCent = 0, dimeCent = 0, nickCent = 0, pennCent = 0;

    char decor = '~';
    cout << "Welcome to Braulio's Store!\nHere we sell various items, check them out below!\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "(a)Apple: $2.00\n(b)Orange: $1.50\n(c)Chips: $3.00\n(d)USB Drive: $5.00\n(e)Uranium: $300.00\n\n\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    bool contAdding = true;
    char itemID = 'a';
    int itemAmnt = 0;
    while (contAdding != false) {
        cout << "Please select the item letter followed by the amount of that item that you want to add it to your cart. Type 'n' to exit\n";
        cin >> itemID;
        itemID = tolower(itemID);
        switch (itemID)
        {
        case 'a':
            cout << "Please input the amount of the item that you want: ";
            cin >> itemAmnt;
            if (!(itemAmnt >= 1)) {
                cout << "Error, please try again: ";
                continue;
            }
            else {
                total = total + (2.00* itemAmnt);
                continue;
            }
            break;
        case 'b':
            cout << "Please input the amount of the item that you want: ";
            cin >> itemAmnt;
            if (!(itemAmnt >= 1)) {
                cout << "Error, please try again: ";
                continue;
            }
            else {
                total = total + (1.50 * itemAmnt);
                continue;
            }
            break;
        case 'c':
            cout << "Please input the amount of the item that you want: ";
            cin >> itemAmnt;
            if (!(itemAmnt >= 1)) {
                cout << "Error, please try again: ";
                continue;
            }
            else {
                total = total + (3.00 * itemAmnt);
                continue;
            }
            break;
        case 'd':
            cout << "Please input the amount of the item that you want: ";
            cin >> itemAmnt;
            if (!(itemAmnt >= 1)) {
                cout << "Error, please try again: ";
                continue;
            }
            else {
                total = total + (5.00 * itemAmnt);
                continue;
            }
            break;
        case 'e':
            cout << "Please input the amount of the item that you want: ";
            cin >> itemAmnt;
            if (!(itemAmnt >= 1)) {
                cout << "Error, please try again: ";
                continue;
            }
            else {
                total = total + (300.00 * itemAmnt);
                continue;
            }
            break;
        case 'n':
            contAdding = false;
            cout << "Exiting\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            break;
        default:
            contAdding = false;
            cout << "Exiting\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            break;
        }
    }

    taxAmnt = total * tax;
    taxAmnt = round(taxAmnt * 100) / 100;
    amntLeft = taxAmnt + total;
    cout << "tax: " << taxAmnt << "\n";

    cout << "The total is: " << amntLeft << "\n";
    cout << "Please Enter the amount tendered: ";
    cin >> tendered;
    if (tendered <= 0) {
        cout << "Error: Please try again";
        exit;

    }
    else {
        finalTotal = tendered - amntLeft;
        finalTotal = round(finalTotal * 100) / 100;
        if (finalTotal == 0) {
            cout << "There is no change to give back!";
        }
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "Your total change was: " << finalTotal << "\n";

    while (finalTotal != 0) {

        if (finalTotal >= 50) {
            fiftyDol = floor(finalTotal / 50);

            finalTotal = fmod(finalTotal, 50);
        }
        if (finalTotal <= 49 && finalTotal >= 20) {
            twentyDol = floor(finalTotal / 20);
            finalTotal = fmod(finalTotal, 20);
        }
        if (finalTotal <= 19 && finalTotal >= 10) {
            tenDol = floor(finalTotal / 10);
            finalTotal = fmod(finalTotal, 10);
        }
        if (finalTotal <= 9 && finalTotal >= 5) {
            fiveDol = floor(finalTotal / 5);
            finalTotal = fmod(finalTotal, 5);
        }
        if (finalTotal <= 4 && finalTotal >= 1) {
            oneDol = floor(finalTotal / 1);
            finalTotal = fmod(finalTotal, 1);
        }
        if (finalTotal <= .99 && finalTotal >= .25) {
            quartCent = floor(finalTotal / .25);
            finalTotal = fmod(finalTotal, .25);
        }
        if (finalTotal <= .24 && finalTotal >= .10) {
            dimeCent = floor(finalTotal / .10);
            finalTotal = fmod(finalTotal, .10);
        }
        if (finalTotal <= .09 && finalTotal >= .05) {
            nickCent = floor(finalTotal / .05);
            finalTotal = fmod(finalTotal, .05);
        }
        if (finalTotal <= .04 && finalTotal >= .01) {
            pennCent = floor(finalTotal / .01);
            finalTotal = fmod(finalTotal, .01);
        }
        else {
            break;
        }

    }

    cout << "Your total change breakdown is: $50:" << fiftyDol << ", $20:" << twentyDol << ", $10:" << tenDol << ", $5:"
        << fiveDol << ", $1:" << oneDol << ", $.25:" << quartCent << ", $.10:" << dimeCent << " $.05:" << nickCent << ", $.01:" << pennCent;

    cout << "Please come again!\n\n\n";

}
