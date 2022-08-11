#include<iostream>
using namespace std;
int main(){
	int num,temp,digit=0,rem,res=0,pow,i;
	cout<<"Enter the no"<<endl;
	cin>>num;
	temp=num;
	while(num>0)
	{
		num/=10;
		digit++;
	}
	num=temp;
	while(num>0)
	{
		rem=num%10;
		pow=1;
		i=0;
		while(i<digit)
		{
			pow=pow*rem;
			i++;
		}
		res=res+pow;
		num/=10;
	}
	if(res==temp)
		cout<<"it is armstrong"<<endl;
	else
		cout<<"it is not an armstrong no"<<endl;
	return 0;
}
