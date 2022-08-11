#include<iostream>
using namespace std;
int main(){
	int num,i,sum=0;
	cout<<"enter number"<<endl;
	cin>>num;

	for(i=1;i<num;i++)
		{
			if(num%i==0)
				sum=sum+i;
		}
	
		if(num==sum)
			cout<<num<<" is a perfect no";
		else
			cout<<num<<" is not a perfect no";
	
		return 0;
}
