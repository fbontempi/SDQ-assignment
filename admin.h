#include <iostream>
#include "results_and_quiz.h"
using namespace std;
class Admin
{
    public:
    void admin_fun()
    {
    char ans;
    cout << "would you like to look a results or edit quiz\n";
    cout << "type r for results\ntype q for edit quiz";
    cin >> ans;
    if(ans == 'q')
    {
        ofstream writeq ("quiz_questions.txt",ios_base::app);
        string q;
        writeq << q;
        writeq.close();

    }
    if(ans == 'r')
    {
        esults_file admin_r;
        admin_r.read_results();
    }
    else{cout << "error incorrect value\n";}
    }
};
