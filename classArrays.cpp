#include <iostream>
using namespace std;

class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;
    // int counter=0;

public:
    void initcounter()
    {
        counter = 0;
    }
    void Setvalue(void);
    void Displayvalue(void);
};

void shop ::Setvalue(void)
{
    cout << "Enter id no of item no "<<counter<<endl;
    cin >> itemid[counter];
    cout << "Enter price of item: "<<endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::Displayvalue(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << " is rupess " << itemprice[i] << endl;
    }
}
int main()
{
    shop rashan;
    rashan.initcounter();
    rashan.Setvalue();
    rashan.Setvalue();
    rashan.Setvalue();
    rashan.Setvalue();
    rashan.Displayvalue();
    return 0;
}