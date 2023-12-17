#include <iostream>

using namespace std;

int main()
{
    int total, n;
    cout << "WELCOME TO JAY GAME...\n ENTER YOUR TOTAL NUMBER: " << endl;
    cin>>total;

    while (true) // the loop will continue till total is equals to zero
    {
        if (total%3 == 2) //to be able to determine  your values
        {
            total = total - 2 ;
            cout << "Am subtracting 2 \n Your turn: "<< endl;
        }
        else
        {
            total --;
            cout << "Am subtracting 1 \n Your turn: "<< endl;
        }
        cout << "the new TOTAL is "<< total << endl;
        if (total == 0 )
        {
            cout << "I WON !" << endl;
            break;
        }

        cout << "ENTER YOUR OWN NUMBER between 1 and 2 " <<endl;
                cin>> n;
        while (n<1 || n>2)
        {
            cout<< "the number you entered is not 1 or 2 \n re-enter :"<< endl;
                cin >> n;

        }
        total = total - n;
        cout << "the new TOTAL is "<< total << endl;
        if (total == 0 )
        {
            cout << "you WON !" << endl;
            break;
        }
    }


    return 0;
}
