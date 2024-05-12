#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"enter the value of n\n";
	int n;
	cin>>n;
	cout<<endl;
	
	//pattern7 star triangle 
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++)
		cout<<" ";
		for(int j=0;j<2*i+1;j++)
		cout<<"*";
		for(int j=0;j<n-i-1;j++)
		cout<<" ";
		cout<<endl;
	}
	cout<<endl;
	
	//pattern8 inverted star triangle
	int m=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++)
		cout<<" ";
		for(int k=1;k<2*m;k++)
		cout<<"*";
		m--;
		for(int j=0;j<i;j++)
		cout<<" ";
		cout<<endl;
	} 
	
	int c=n;
	//pattern 9 diamond (both triangle)
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++)
		cout<<" ";
		for(int j=0;j<2*i+1;j++)
		cout<<"*";
		for(int j=0;j<n-i-1;j++)
		cout<<" ";
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++)
		cout<<" ";
		for(int j=1;j<2*c;j++)
		cout<<"*";
		c--;
		for(int j=0;j<i;j++)
		cout<<" ";
		cout<<endl;
	}
	cout<<endl;


//pattern10
for(int i=0;i<=n;i++){
	for(int j=0;j<i;j++)
	cout<<"*";
	cout<<endl;
}
for(int i=1;i<n;i++){
	for(int j=n-i;j>0;j--)
	cout<<"*";
	cout<<endl;
}

//pattern 11
int start =0;
for(int i=0;i<n;i++){
	if(i%2==0) start =1;
	else start=0;
	for(int j=0;j<=i;j++)
	{
		cout<<start<<" ";
		start = 1- start;
	}
	cout<<endl;
}
}

	
	
	
	
	
	

