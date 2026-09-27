#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const double fixed_royalty = 5000.00;
    const double pub_royalty = 20000.00;

    const double option2_rate = 0.125;
    const double option3_rate1 = 0.10;
    const double option3_rate2 = 0.14;
    const int option3_max = 4000;

    double netPrice;
    int num_copies;

    cout << "Enter the net price of each copy: $";
    cin >> netPrice;

    cout << "Enter the number of copies sold: ";
    cin >> num_copies;

    double option1 = fixed_royalty + pub_royalty;

    double option2 = option2_rate * netPrice * num_copies;

    double option3;

    if (num_copies <= option3_max)
    {
        option3 = option3_rate1 * netPrice * num_copies;
    }
    else
    {
        option3 = option3_rate1 * netPrice * option3_max
                + option3_rate2 * netPrice * (num_copies - option3_max);
    }

    cout << fixed << setprecision(2);

    cout << "\n Royalties:\n";
    cout << "Option 1: $" << option1 << endl;
    cout << "Option 2: $" << option2 << endl;
    cout << "Option 3: $" << option3 << endl;

    cout << "\n the best option is: ";

    if (option1 >= option2 && option1 >= option3)
    {
        cout << "Option 1" << endl;
    }
    else if (option2 >= option1 && option2 >= option3)
    {
        cout << "Option 2" << endl;
    }
    else
    {
        cout << "Option 3" << endl;
    }

    return 0;
}
