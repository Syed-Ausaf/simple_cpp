#include<iostream>
using namespace std;
int main(){
	int a,b,i,num,k,j;
	cout<<"Enter the first no to be in range"<<endl;
	cin>>a;
	cout<<"Enter the last no of the range"<<endl;
	cin>>b;
	for(i=a;i<=b;i++){
		num=i;
		cout<<"multiplication of number "<<num<<" is ";
		for(k=1;k<11;k++){
			j=num*k;
			cout<<j<<" ";
		}
	cout<<endl;
	}
	cout<<endl;
	return 0;
}
