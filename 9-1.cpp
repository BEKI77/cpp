#include <iostream>
#include <string.h>
/*carefully see the details in this program u haven't understand it fully ....... */
using namespace std;
int wrdnum(char str[]){
   int count=0,i;
   gets(str);
   for(i=0; str[i] != '\0'; i++){
    if(str[i] == ' ')
    count ++;
   }
   return count+1;
}
int main(){
    char str[50];
cout<<"This is a program that finds the number of word in a string \n"<<"Please enter a string : \n";
cin>>str;
cout<< "Number of words in the string are : "<<wrdnum(str);
    
    return 0;
}
 