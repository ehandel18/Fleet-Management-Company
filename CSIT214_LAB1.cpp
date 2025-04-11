#include <iostream>
using namespace std;

int main()
{   //define variables
    const double payincrease = 0.062; 
    double oldsalary, newsalary, increasedpay, monthlysalary;
    char decision;

    while (true)
    {   
        cout << "Enter the former salary or enter 'q' to quit: "; //get salary or quit
        cin >> oldsalary;
        if (cin.fail()) //check inputis valid
        {
            cin.clear(); //clear error
            cin >> decision; 
            if (decision == 'q' || decision == 'Q')
            {
                cout << "program done" << endl;
                break; 
            }
        }
        //calculate new salary, pay, and monthly salary
        increasedpay = oldsalary * payincrease; 
        newsalary = oldsalary + increasedpay; 
        monthlysalary = newsalary / 12; 
        //display pay increae, new annual salary, new monthly salary, or quit
        cout << "Increased pay: " << increasedpay << endl;
        cout << "New annual salary: " << newsalary << endl;
        cout << "New monthly salary: " << monthlysalary << endl << endl;
        cout << "Type 'q' to quit or any other key to continue: ";
        cin >> decision;
        if (decision == 'q' || decision == 'Q')
        {
            cout << "program done" << endl;
            break; 
        }
    }

    return 0;
}