#include<iostream>
using namespace std;
int main(){
	int no,sum=0,sq,rem;
	cout<<"enter the no to calculate the sum"<<endl;
	cin>>no;
	while(no>0)
	{
		rem=no%10;
		if(rem==0)
			sq=1;
		else
			sq=rem*rem;
		sum=sum+sq;
		no/=10;
	}
	cout<<"sum of squares of digit is "<<sum<<endl;
	return 0;
}

