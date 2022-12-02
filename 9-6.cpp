# include <iostream>
# include <string>
using namespace std;
string replace(string str){
    for(int i=0; i < str.size() ; i++){
        if(str[i]=='-')
        str[i]='_';
    }
    return str;
}
int main(){
    cout<<"Enter a string \n";
    string str;
    cin>>str;
    cout<<"the string u have enterd is \n"<<str<<endl<<"The changed string is \n"<<replace(str);
    return 0;
}