#include<iostream>
using namespace std;
int main(){
	int i,flag=0,j;
	int stno,endno;
	cout<<"Enter starting no of range "<<endl;
	cin>>stno;
	cout<<"Enter ending no of range "<<endl;
	cin>>endno;
	for(i=stno;i<=endno;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				flag++;
				break;}

		}
		if(flag==0&& i!=1)
			cout<<i<<endl;
		flag=0;

	}
	return 0;
}
