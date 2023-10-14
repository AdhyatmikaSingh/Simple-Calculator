#include<iostream>
using namespace std;
int main(){
	float a,b;
	char op;
	cout<<"Enter the first no. :  ";
	cin>>a;
	cout<<" Enter the operator : ";
	cin>>op;
	cout<<"Enter the second no. :  ";
	cin>>b;
    switch(op){
		case '+' : 
		cout<<a+b<<endl;
		break;
		case '-' : 
		cout<<a-b<<endl;
		break;
		case '*' : 
		cout<<a*b<<endl;
		break;
		case '/' : 
		cout<<a/b<<endl;
		break;
		default :
			cout<<"operator not supported";
	}
	
	return 0;
}

