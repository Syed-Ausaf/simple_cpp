#include<iostream>
using namespace std;
int reverse(int);
int main(){
	int num,rev;
	cout<<"Enter the no to be reversed "<<endl;
	cin>>num;
	rev=reverse(num);
	cout<<"Reversed no is "<<rev;
	return 0;
}
int reverse(int a){
	int rem,rev=0;
	while(a!=0){
	rem=a%10;
	rev=rem+(rev*10);
	a/=10;
	}
	return rev;
}


