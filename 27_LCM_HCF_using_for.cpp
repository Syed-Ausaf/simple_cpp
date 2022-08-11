#include<iostream>
using namespace std;
int main(){
	int temp,a,b,m;
	cout<<"Enter a and b "<<endl;
	cin>>a>>b;
	if(a>b)
		m=a;
	else
		m=b;
	temp=m;
	for(;;m++){
		if((m%a==0)&&(m%b==0))
			break;
		}
	cout<<" LCM is "<<m<<endl;
	m=temp;
	for(;;m--){
		if((a%m==0)&&(b%m==0))
			break;
	}
	cout<<"HCF is "<<m<<endl;
	return 0;
}
