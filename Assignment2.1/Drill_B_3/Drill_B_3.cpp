#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;



bool legalUnit(string unit)
{
    bool legal = false;
    const vector<string> legal_units{ "cm", "m", "in", "ft" };
    for (auto legal_unit : legal_units)
    {
        if (unit == legal_unit)
        {
            legal = true;
            break;
        }

    }
    return legal;
}

void printLegalUnits()
{
    cout << "cm for centimeters" << endl
        << "m for meters" << endl
        << "in for inches" << endl
        << "ft for feet" << endl;
}

double convertToMeter(double val, string unit)
{
    if ("cm" == unit)
    {
        const double cm_to_m = 0.01;
        return val * cm_to_m;
    }
    else if ("in" == unit)
    {
        const double in_to_m = 0.0254;
        return val * in_to_m;
    }
    else if ("ft" == unit)
    {
        const double ft_to_m = 0.3048;
        return val * ft_to_m;
    }
    else {
        return val;
    }
}


int main2() {

    cout << "Enter a double value followed by a unit with or without a space in between (followed by 'Enter'):\n";



    double val = 0;


    double valMeter = 0;
    double smallest = 0;
    double largest = 0;
    string unit;
    int count = 0;
    double sum = 0;





    printLegalUnits();



    while ((cin >> val >> unit))
    {





        auto str = std::to_string(val);
        cin.clear();
        cin.ignore(1000, '\n');

        if (legalUnit(unit))
        {
            valMeter = convertToMeter(val, unit);
            cout << val << unit;
            if (unit != "m")
            {
                cout << " (" << valMeter << "m)";
            }
            if (0 == count)
            {
                smallest = valMeter;
                largest = valMeter;

                cout << " is the first value and therefore the smallest and largest so far" << endl;
            }

            else if (valMeter < smallest)
            {
                cout << " the smallest so far" << endl;
                smallest = valMeter;
            }
            else if (valMeter > largest)
            {
                cout << " the largest so far" << endl;
                largest = valMeter;
            }
            else
            {
                cout << "" << endl;
            }
            sum += valMeter;
            count++;
        }
        else {
            cout << "Error: no legal unit. Enter one of " << endl;
            printLegalUnits();
        }
    }

    cout << "The smallest: " << smallest << "m" << endl
        << "The largest: " << largest << "m" << endl
        << "Number of values entered: " << count << endl
        << "The sum of values: " << sum << "m" << endl;

    return 0;
}
