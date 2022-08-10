#include<iostream>
using namespace std;
int main(){
	int a =10,b=20;
	cout<<"a is "<<a<<" and b is "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"AFTER SWAP WITHOUT USING THIRD VARIABLE a is "<<a<<" and b is "<<b<<endl;
	return 0;
}
