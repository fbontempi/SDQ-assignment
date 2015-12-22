#include <iostream>
#include "results_and_quiz.h"
#include "admin.h"
using namespace std;

class Login
{
public:

    void SendUsername()
    {
        //char Username[9];
        string Username;
        string d = "admin";
        string g = "student";
        while(1)
        {

            cout << "Login as Student or Admin?\n" << endl;
            cin >> Username;

            if (Username == d)
            {
                admin a;
                a.admin_fun();
            }

            else if (Username == g)
            {
                Student s;
                s.doquiz();
            }

            else
            {
                cout << "Invalid User" << endl;

                break;
            }

        }

    }


};

/*int main()
{
    Login l;

    l.SendUsername();

    return 0;
}*/

