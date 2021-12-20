#include<bits/stdc++.h>

using namespace std;

int main(){
    string x="Ami Atiq";
    int j=x.size()-1;
    string str="";
   // cout<<"length of x "<<j<endl;
    for (int i = j; i > -1; i--)
    {
      
       str+=x[j];
       j--;
    }
    cout<<str<<endl;
    return 0;
}