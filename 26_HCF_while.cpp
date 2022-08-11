//m ko chotawala aur m--
#include<iostream>
using namespace std;
int main(){
	int a,b,m;
	cout<<"Enter a and b "<<endl;
	cin>>a>>b;
	if(a>b)
		m=b;
	else
		m=a;
	while(1){
		if((a%m==0)&&(b%m==0))
			break;
		else
			m--;
	}
	cout<<"HCF of a and b is "<<m;
	return 0;
}
