#include<iostream>
using namespace std;

int main()
{
    char ch[20];
   cout<<"Enter the character"<<endl;
   cin>>ch;
   int count = 0;
   for(int i=0; ch[i]!='\0'; i++){
       count++;
   }
   cout<<"Length of char is  "<<count<<endl;
   
    return 0;
}