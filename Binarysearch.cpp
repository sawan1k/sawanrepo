#include<iostream>
using namespace std;
int binarysearch(int arr[] ,int n ,int key)
{
    int start =0;
    int end = n-1;
    int mid = start+(end - start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start= mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start +(end - start)/2;
    }
}
int main(){
    int even[8]= {2 ,4 ,6 ,8,12,14,18,16};
    int odd[5]= {3 ,8,11,14,16};
    int evenindex = binarysearch(even ,8 ,12);
    cout<<"index of 12 is "<<evenindex<<endl;
    int oddindex= binarysearch(odd ,5 ,14);
     cout<<"index of 14 is "<<oddindex<<endl;
    return 0;
}