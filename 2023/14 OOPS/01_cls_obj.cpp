#include<iostream>
using namespace std;
class Hero{
     public:
    int health;
    int level;
};
int main()
{
    Hero h; 
    cout<<sizeof(h)<<endl;
    cout<<"helth"<<h.health<<endl;
    cout<<"level"<<h.level<<endl;
    return 0;
}