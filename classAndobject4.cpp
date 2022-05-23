#include <iostream>
#include <string>
using namespace std;

// Nesting of a member function
class Name
{
    string name;

public:
    void Getname(void);
    void chk_name(void);
};

void Name ::Getname(void)
{
    cout << "Enter a Name: " << endl;
    cin >> name;
}

void Name ::chk_name(void)
{
    for (int i = 0; i < name.length(); i++)
    {
        if (name.at(i) >= '0' && name.at(i) <= '9' )
        {
            cout << "InCorrect enter a Name " << endl;
            exit(0);
        }
        else
        {
            cout << "correct " << endl;
            exit(0);
        }
    }
}
int main()
{
    Name Check;
    Check.Getname();
    Check.chk_name();
    return 0;
}