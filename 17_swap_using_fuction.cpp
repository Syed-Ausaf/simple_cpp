#include<iostream>
using namespace std;
void swap(int *,int *);
int main(){
	int a,b;
	cout<<"Enter a no 'a'"<<endl;
	cin>>a;
	cout<<"Enter a no 'b'"<<endl;
	cin>>b;
	swap(&a,&b);
	cout<<"after swap and a is "<<a<<" and b is "<<b<<endl;
	return 0;
}
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
