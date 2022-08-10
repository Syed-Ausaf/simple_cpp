#include<iostream>
using namespace std;
int main(){
	int a=12,b=13,temp;
	cout<<"before swap a is "<<a<<" and b is "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swap a is "<<a<<" and b is "<<b<<endl;	
	return 0;
}
