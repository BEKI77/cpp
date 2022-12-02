#include<iostream>

using namespace std;
/*This function is used to print out the largest element in any array
it takes in two parameters as you can see the elementes of the array and the size of the array  */

const int biggest(long int item_array[],int ARRAY_SIZE)

{

int index; // Current index

int biggest; // Index of the biggest element

// Assume the first is the biggest

biggest =item_array[0]; 

for (index = 1; index < ARRAY_SIZE; ++index) // using the for loop we try to compare each element to find the largest one

if (item_array[index] > biggest)


        biggest=item_array[index]; // then after we store the largest element in the biggest variable..

return biggest;
 }

 int main(){
    long int arrsize;

    cout<<"Enter the size of array \n";

    cin>>arrsize;
    long int array[arrsize];

    cout<<"enter the elements of the array \n";
    

    for(int j=0; j<=arrsize; j++){

    cin>>array[j]; // this acceptes each elements in the array from the user...

    }


    cout<<"The biggest element in the array is \n"<<biggest(array,arrsize);

 }
//this shit took me the whole day i almost have have a mental break down fuck this shit 
