#include <iostream>
using namespace std;

int main()
{

    int array[5], position ,i ,n, value;
    cout<<"Enter the no. of elements in array: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for( i= 0; i<n; i++){
        cin>>array[i];}

    cout<<"Enter the location where you want to insert the element: ";
    cin>>position;

    cout<<"Enter the value you want to insert: ";
    cin>>value;
    for(i=n+1; i>=position; i--){
    array[i-1]=array[i];}
    array[position-1]=value;
    printf("Resultant array is: ");
    for(i=0; i<=n; i++)
    cout<<"\n"<<array[i];

    return  0;
    
}
