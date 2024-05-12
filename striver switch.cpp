#include<iostream>
using namespace std;
int main(){
	int x;
	do{
	cin>>x;	
	switch(x){
		case 1: cout<<"monday\n";break;
		case 2: cout<<"tuesday\n";break;
		case 3: cout<<"wed";break;
		case 4: cout<<"thur";break;
		case 5: cout<<"fri\n";break;
		case 6: cout<<"sat";break;
		case 7: cout<<"sun";break;
		case 9: break;
default : cout<<"invalid input\n";
	}
}while(x!=9);
cout<<"exited\n";
}
