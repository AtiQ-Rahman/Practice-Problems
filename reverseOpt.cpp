#include <iostream>
using namespace std;

int main() {
    string x="logaP io";

    int l=x.size();

    for (int i = 0; i < x.size()/2; i++)
    {
       char temp=x[i];
       x[i]=x[l-1];
       x[l-1]=temp;
       l--;
    }

    cout<<x<<endl;
    
}