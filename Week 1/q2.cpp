#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array : ";
    cin >> size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter the"<<i<<"element: ";
        cin>>arr[i];
    }
    float sum=0;
    for(int i = 0 ; i < size ; i++){
        sum+=(float)arr[i];
    }
    float avg=sum/float(size);
    cout<<endl<<"Average is:"<<avg;
}