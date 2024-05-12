#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"enter the value of n\n";
	int n;
	cin>>n;
	cout<<endl;
	
	//pattern12
	int m=2*(n-1);
	for(int i=0;i<n;i++){
	
	for(int j=1;j<=i;j++)
	cout<<j;
	
	for(int j=1; j<=m;j++)
	cout<<" ";
	
	for(int j=i;j>=1;j--)
	cout<<j;
	
	cout<<endl;
	m-=2;
	}
	cout<<endl;
	
	int count=1;
	//pattern13
	for(int i =0;i<=n;i++){
		for(int j=0;j<i;j++)
		cout<<count++<<" ";
		cout<<endl;
	}
	cout<<endl;
	
	
	
	//pattern14
	for(int i=0;i<n;i++){
	for(char ch = 'A'; ch<= 'A'+i;ch++)
	cout<<ch<<" ";
	cout<<endl;
	}
	cout<<endl;

//pattern 15
for(int i=0;i<n;i++){
	for(char ch='A';ch<='A'+(n-i-1);ch++)
	cout<<ch<<" ";
	cout<<endl;
}
cout<<endl;

//pattern 16

for(int i=0;i<n;i++){
	char ch = 'A'+i;
	for(int j=0;j<=i;j++){
		cout<<ch<<" ";
	}
	cout<<endl;
}
cout<<endl;


//pattern 17
for(int i=0;i<n;i++){
	for(int j=0;j<n-i-1;j++)
	cout<<" ";
	
	char ch = 'A';
	int breakpoint = (2*i+1)/2;
	for(int j=1;j<=2*i+1;j++){
	cout<<ch;
	if(j<=breakpoint)ch++;
	else ch--;
		}
		
	for(int j=0;j<n-i-1;j++)
	cout<<" ";
	cout<<endl;
}


//pattern18
for(int i=0;i<n;i++){
	for(char ch = 'Z'-i; ch<='Z';ch++)
	cout<<ch<<" ";
	cout<<endl;
}
cout<<endl;


//pattern19
int s =0;
for(int i=0;i<n;i++){
	for(int j=0;j<n-i;j++)
	cout<<"*";
	
	for(int j=0;j<i*2;j++)
	cout<<" ";
	
	for(int j=n-i;j>0;j--)
	cout<<"*";
	
	s+=2;
	cout<<endl;
}

s=8;
for(int i=1;i<=n;i++){
	
for(int j=1;j<=i;j++)
cout<<"*";

for(int j=0;j<s;j++)
cout<<" ";

for(int j=1;j<=i;j++)
cout<<"*";

s-=2;
	cout<<endl;
}

cout<<endl;



//pattern20
int spaces = 2*n-2;
for(int i=1;i<=2*n-1;i++){
	int stars =i;
	if(i>n) stars = 2*n-i;
	
	for(int j=0;j<stars;j++)
	cout<<"*";
	
	for(int j=1;j<=spaces;j++)
	cout<<" ";
	
	for(int j=1;j<=stars;j++)
	cout<<"*";
	
	cout<<endl;
	if(i<n) spaces-=2;
	else spaces +=2;
}
cout<<endl;


//pattern 21
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(i==0||i==n-1||j==0||j==n-1)
		cout<<"*";
		else
		cout<<" ";

	}
	cout<<endl;
}
		cout<<endl;
		
		
		//pattern22
		for(int i=0;i<2*n-1;i++){
			for(int j=0;j<2*n-1;j++){
				int top =i;
				int left =j;
				int right = (2*n-2)-j;
				int down = (2*n-2)-i;
				cout<<(n-min(min(top,down),min(left,right)));
			}
			cout<<endl;
		}
}















