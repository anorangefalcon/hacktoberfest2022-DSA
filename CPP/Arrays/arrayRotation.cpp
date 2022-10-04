#include <iostream>
using namespace std;

void reverse(int *arr, int n){
    for (int i = 0; i < (n/2); i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
    return;
}

int main(){
    int n;cin>>n;
    int arr[100];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
