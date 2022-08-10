#include<iostream>
using namespace std;
void factorial(int ,int *);
int main(){
	int num,fact=1;
	cout<<"Enter the no to calculate the factorial "<<endl;
	cin>>num;
	factorial(num,&fact);
	cout<<"factorial is "<<&fact<<endl;
	return 0;
}
void factorial(int a,int *n){
	int i;
	for(i=a;i<0;i--){
		*n=*n*i;
	}
}
