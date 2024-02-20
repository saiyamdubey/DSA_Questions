#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
    int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	sort(arr,arr+num);
	for(int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	try
    {
        cout<<arr[6];
    }
    catch()
    {
        cout << "\nThe Exception element is : ";
    }
    cout << endl;
}