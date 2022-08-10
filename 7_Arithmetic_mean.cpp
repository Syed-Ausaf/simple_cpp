#include<iostream>
using namespace std;
int main(){
	int n,i,arr[30],sum=0,arthmean;
	cout<<"Enter the no of elements"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	arthmean=sum/n;
	cout<<"Arithmetic mean is  "<<arthmean<<endl;
	return 0;
}
