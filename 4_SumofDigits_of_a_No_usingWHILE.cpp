#include<iostream>
using namespace std;
int main(){
	int n1,rem,sum=0;
	cout<<"Enter a no "<<endl;
	cin>> n1;
	while(n1>0){
		rem=n1%10;
		sum =sum+rem;
		n1=n1/10;
	}
	cout<<"sum of digits of the no "<<n1<<" is "<<sum<<endl;
	return 0;
}
