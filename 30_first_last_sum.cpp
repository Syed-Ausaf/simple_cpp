#include<iostream>
using namespace std;
int main(){
	int t=0,n,f,l,s=0;
	cout<<"enter a no"<<endl;
	cin>>n;
	while(n!=0){
		if(t==0)
	{
		l=n%10;
		t++;
	}
		f=n%10;
		n/=10;
	}
	s=f+l;
	cout<<"sum is "<<s<<endl;
	return 0;
}

	

