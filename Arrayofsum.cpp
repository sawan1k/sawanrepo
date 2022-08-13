#include <iostream>
using namespace std;

void printArray(int arr[] ,int n)
{
    for (int  i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
int sumofArray(int arr[] ,int n)
{
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;

}
int main()
{
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<"The given array is "<<endl;
    printArray(num,size);
    cout<<"Sum of array is "<<sumofArray(num,size)<<endl;
    return 0;

}