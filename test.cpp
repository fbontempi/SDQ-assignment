#include <iostream>

using namespace std;

class Login
{
public:

    void SendUsername()
    {
        char Username[9];

        while(1)
        {

            cout << "Login as Student or Admin?\n" << endl;
            cin >> Username;

            if (Username == 'admin')
            {
                Admin a;
                a.Admin_Function;
            }

            else if (Username == 'student')
            {
                Student s;
                s.doquiz;
            }

            else
            {
                cout << "Invalid User" << endl;

                break;
            }

        }

    }


};

int main()
{
    Login l;

    l.SendUsername();

    return 0;
}

