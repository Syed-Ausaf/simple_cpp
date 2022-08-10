#include<iostream>
using namespace std;
int main(){
	int num,rev=0,rem;
	cout<<"Enter a no to reverse"<<endl;
	cin>>num;
	for(rev=0;num!=0;num=num/10){
		rem=num%10;
		rev=rem+(rev*10);
	}
	cout<<"Reversed no is "<<rev<<endl;
	return 0;
}
