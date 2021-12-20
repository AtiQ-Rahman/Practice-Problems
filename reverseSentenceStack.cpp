//https://www.youtube.com/watch?v=k1O1PhuarpI
#include<bits/stdc++.h>
using namespace std;

int main(){

    string x="Ami atiq tui kida?",word="";
    stack <string> s;
    
    for (int i = 0; i < x.size(); i++)
    {  
        // if(x[i] == ' '){
        //     s.push(word);
        //     word="";

        // }

        // else  word+=x[i];

        string w="";
        while (x[i]!=' ' && i<x.size())
        {
           w+=x[i];
           i++;
        }
        s.push(w);
        
        
    }
    //s.push(word);
    for (int i = 0; !s.empty(); i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    
    return 0;
}