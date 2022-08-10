#include<iostream>
using namespace std;
int main(){
	int n1,rem,sum=0;
	cout<<" Enter a no "<<endl;
	cin>>n1;
	for(sum=0;n1>0;n1=n1/10)
	{
		rem=n1%10;
		sum+=rem;
	}
	cout<<"Sum of digits of the no"<<" is "<<sum<<endl;
	return 0;
}

