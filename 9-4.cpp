# include<iostream>
using namespace std;
/*This little shitty pieace of code is intended for creating a function that will take a character string and return a primitive hash code
by adding up the value of each character in the string */

int hashvalue(char str[])//first i created a function that takes in array of characters and returns the hash value
{
    int count=0,i;       //then i declared a variable to store the added character(count)......and i for looping until the end of character.. 
 for(i=0; str[i]!='\0'; i++ ){
        count += (int)str[i];
    }
    return count;

}
int main()        //and this is the main function to test the hashvlaue function
{
    
    cout<<"enter a string : ";
    char str[50];
    cin>>str;
    cout<<"The hash value of the string "<<str<<" = " << hashvalue(str)<<endl;
  
    return 0;

}