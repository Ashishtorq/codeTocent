#include <iostream>
using namespace std;
void upDate(int i)
{

    i++;
}
void update(int& i)
{

    i++;
}
int main()
{
    int i = 5;
    cout << "Before" << i << endl;
    upDate(i);
    cout << "Before" << i << endl;

    int n = 6;
    cout << "Before" << i << endl;
    update(n);
    cout << "Before" << i << endl;
    return 0;
}