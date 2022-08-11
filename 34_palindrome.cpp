#include<iostream>
using namespace std;
int main(){
	int num,rev=0,rem,temp;
	cout<<"enter the no"<<endl;
	cin>>num;
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		rev=rem+(rev*10);
		temp/=10;
	}
	if(num==rev)
		cout<<"it is palindrome"<<endl;
	else
		cout<<"it is not a palindrome"<<endl;
	return 0;
}

