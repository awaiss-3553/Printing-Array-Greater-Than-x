#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"enter x value";
    cin>>x;
    int arr[]={423,456,65,3,4,6,1,4,5};
    int count=0;
    for(int i=0; i<=8;i++){
        if(arr[i]>x)
            count=count+1;
    }
    cout<<count;
    return 0;
}
