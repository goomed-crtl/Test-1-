

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double monthlySales;
    double advancedPay;
    double commissionRate;
    cout << "Enter the salesperson's monthly sales: ";
    cin >> monthlySales;
    
    
        if (monthlySales > 0)

        {
            if (monthlySales < 10000)
            {
                commissionRate = .05;
                cout << "Enter the amount of advanced pay for this salesperson: ";
                cin >> advancedPay;
                cout << "Pay Results\n-----------\n";
                cout << "Sales: " << fixed << setprecision(2) << monthlySales << endl;
                cout << "Commission Rate: " << commissionRate << endl;
                cout << "Commission: " << monthlySales * commissionRate << endl;
                cout << "Advanced pay: " << advancedPay << endl;
                if (monthlySales * commissionRate - advancedPay < 0)
                {
                    cout << "You owe Crazy AI $" << (monthlySales * commissionRate - advancedPay) * -1;
                }
                else
                    cout << "Remaining Pay: " << (monthlySales * commissionRate - advancedPay);
            }
            else if (monthlySales > 10000 && monthlySales <= 14999)
            {
                commissionRate = .10;
                cout << "Enter the amount of advanced pay for this salesperson: ";
                cin >> advancedPay;
                cout << "Pay Results\n-----------\n";
                cout << "Sales: " << fixed << setprecision(2) << monthlySales << endl;
                cout << "Commission Rate: " << commissionRate << endl;
                cout << "Commission: " << monthlySales * commissionRate << endl;
                cout << "Advanced pay: " << advancedPay << endl;
                if (monthlySales * commissionRate - advancedPay < 0)
                {
                    cout << "You owe Crazy AI $" << (monthlySales * commissionRate - advancedPay) * -1;
                }
                else
                    cout << "Remaining Pay: " << (monthlySales * commissionRate - advancedPay);
            }
            else if (monthlySales > 14999 && monthlySales <= 17999)
            {
                commissionRate = .12;
                cout << "Enter the amount of advanced pay for this salesperson: ";
                cin >> advancedPay;
                cout << "Pay Results\n-----------\n";
                cout << "Sales: " << fixed << setprecision(2) << monthlySales << endl;
                cout << "Commission Rate: " << commissionRate << endl;
                cout << "Commission: " << monthlySales * commissionRate << endl;
                cout << "Advanced pay: " << advancedPay << endl;
                if (monthlySales * commissionRate - advancedPay < 0)
                {
                    cout << "You owe Crazy AI $" << (monthlySales * commissionRate - advancedPay) * -1;
                }
                else
                    cout << "Remaining Pay: " << (monthlySales * commissionRate - advancedPay);
            }
            else if (monthlySales > 17999 && monthlySales <= 21999)
            {
                commissionRate = .14;
                cout << "Enter the amount of advanced pay for this salesperson: ";
                cin >> advancedPay;
                cout << "Pay Results\n-----------\n";
                cout << "Sales: " << fixed << setprecision(2) << monthlySales << endl;
                cout << "Commission Rate: " << commissionRate << endl;
                cout << "Commission: " << monthlySales * commissionRate << endl;
                cout << "Advanced pay: " << advancedPay << endl;
                if (monthlySales * commissionRate - advancedPay < 0)
                {
                    cout << "You owe Crazy AI $" << (monthlySales * commissionRate - advancedPay) * -1;
                }
                else
                    cout << "Remaining Pay: " << (monthlySales * commissionRate - advancedPay);
            }
            else
            {
                commissionRate = .16;
                cout << "Enter the amount of advanced pay for this salesperson: ";
                cin >> advancedPay;
                cout << "Pay Results\n-----------\n";
                cout << "Sales: $" << fixed << setprecision(2) << monthlySales << endl;
                cout << "Commission Rate: " << commissionRate << endl;
                cout << "Commission: $" << monthlySales * commissionRate << endl;
                cout << "Advanced pay: $" << advancedPay << endl;
                if (monthlySales * commissionRate - advancedPay < 0)
                {
                    cout << "You owe Crazy AI: $" << (monthlySales * commissionRate - advancedPay) * -1;
                }
                else
                    cout << "Remaining Pay: " << (monthlySales * commissionRate - advancedPay);
            }
        }
        else


            cout << "You're not making enough comission.";
    
    
}

