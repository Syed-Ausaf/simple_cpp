#include<iostream>
using namespace std;
class ausaf{
	public:
		int reverse(int);
};
int ausaf::reverse(int a){
	int rem,rev;
	while(a!=0){
		rem=a%10;
		rev=rem+(rev*10);
		a/=10;
	}
	return rev;
}

int main(){
	int num,res;
	ausaf c;//create object of class reverse
	cout<<"Enter the no to be reversed"<<endl;
	cin>>num;
	res=c.reverse(num);	//called object as a function
	cout<<"The reversed no is "<<res<<endl;
	return 0;
}
	
