#include<iostream>
using namespace std;
class ausaf{
	public:
	void swap(int *,int *);
};
void ausaf::swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a,b,r;
	cout<<"Enter first no a"<<endl;
	cin>>a;
	cout<<"Enter second no b"<<endl;
	cin>>b;
	ausaf s;
	s.swap(&a,&b);
	cout<<"after swap a is "<<a<<" and b is "<<b;
	return 0;
}


