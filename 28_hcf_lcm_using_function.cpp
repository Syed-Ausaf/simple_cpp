#include<iostream>
using namespace std;
int LCM(int,int);
int HCF(int,int);
int main(){
	int a,b,res;
	cout<<"Enter two no.s a and b "<<endl;
	cin>>a>>b;
	res=LCM(a,b);
	cout<<"LCM is "<<res<<endl;
	res=HCF(a,b);
	cout<<"HCF is "<<res<<endl;
	return 0;
}
int LCM(int x,int y){
	int temp;
	if(x>y)
		temp=x;
	else
		temp=y;
	while(1)
	{
		if((temp%x==0)&&(temp%y==0))
			break;
		temp++;
	}
	return temp;
}
int HCF(int x,int y){
	int temp;
	if(x<y)
		temp=x;
	else
		temp=y;
	while(1)
	{
		if((x%temp==0)&&(y%temp==0))
			break;
		temp--;
	}
	return temp;
}

