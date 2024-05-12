#include<iostream>
using namespace std;
int main(){
cout<<"enter the num of elements\n";
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cout<<"enter element num : "<<i+1<<endl;
	cin>>arr[i];
}
for(int num : arr)
cout<<num<<" ";
}
