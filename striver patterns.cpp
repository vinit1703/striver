#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"enter the value of n\n";
	int n;
	cin>>n;
	cout<<endl;
	
	//pattern1
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		cout<<"*";
		cout<<endl;
	}
	
	//pattern 2
		for(int i=0;i<=n;i++){
		for(int j=0;j<i;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	
	//pattern 3
		for(int i=0;i<=n;i++){
		for(int j=0;j<i;j++)
		cout<<j+1;
		cout<<endl;
	}
	cout<<endl;
	
	//pattern4
		for(int i=0;i<=n;i++){
		for(int j=0;j<i;j++)
		cout<<i;
		cout<<endl;
	}
	cout<<endl;
	
	//pattern5
		for(int i=0;i<=n;i++){
		for(int j=n;j>i;j--)
		cout<<"*";
		cout<<endl;
	}
	
		for(int i=0;i<=n;i++){
			int m=1;
		for(int j=n;j>i;j--){	
		cout<<m;
		m++;
		}
		
		cout<<endl;
	}
}

	
	

