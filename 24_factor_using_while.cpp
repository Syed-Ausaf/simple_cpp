#include<iostream>
using namespace std;
int main(){
	int i=1,num;
	cout<<"enter the no to get the factors"<<endl;
	cin>>num;
	while(i<=num){
		if(num%i==0)//very very important
			cout<<i<<" ";
		i++;
	}
	cout<<endl;
	return 0;
}
