#include <iostream>
using namespace std;

bool begins(string str1, string str2){
    if( str1.size()>str2.size()) 
    return false;
    for(int i=0; i !=str1.size(); i ++)
    {
        if(str1[i] != str2[i])
        { return false;}
    }
    return true;
}
int main(){
    cout<<"enter the two strings : \n";
    string a,b;
     cin>>a>>b;
     if (begins(a,b) == true){
        cout<<a<<" is found in the beginning of "<<b;
     }
     else 
     cout<<a<<" is not in the beginning of "<<b;
     
     return 0;
     
}