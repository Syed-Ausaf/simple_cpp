#include<iostream>
using namespace std;
int main(){
	int num,rem,rev=0;
	cout<<"ENTER THE NO TO REVERSE"<<endl;
	cin>>num;
	while(num!=0){
		rem=num%10;
		rev=rem+(rev*10);
		num/=10;
	}
	cout<<"Reversed no is "<<rev<<endl;
	return 0;
}
