#include <iostream>
using namespace std;
/* This function is used to count the number of times an element is repeated in an array....
this this care fully it's simple */
int count(int number,int array[], int arraysize){
    int index =0;
    for(int i=0; i<arraysize; i++)
    {
        if(array[i]==number)
        index ++;
    }
    return index;

}
int main(){
    int arraysize;
    cout<<"enter the size of the array \n";
    cin>>arraysize;
    int array[arraysize];
    for(int i = 0 ; i < arraysize ; i++){
        cout<<"enter the elements \n";
        cin>>array[i];
    }
    int number;
    cout<<"enter the number that you want to be checked \n";
    cin>>number;
    cout<<number<<" has been repeated "<<count(number,array,arraysize)<<" times.";

}