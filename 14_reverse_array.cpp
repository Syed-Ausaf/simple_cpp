#include<iostream>
using namespace std;
int main(){
	int num,rev,rem,i=0,count=0,arr[10];
	cout<<"Enter the no "<<endl;
	cin>>num;
	while(num!=0){
	
			rem=num%10;
			arr[i]=rem;
			num/=10;
			i++;
			count++;

		}
	cout<<"Reverse of the no is "<<endl;
	for(i=0;i<count;i++)
		cout<<arr[i];
	cout<<endl;
	return 0;
}

