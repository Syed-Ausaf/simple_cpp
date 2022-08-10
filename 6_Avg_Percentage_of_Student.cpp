#include<iostream>
using namespace std;
int main(){
	int a,marks[5];
	float sum=0,avg,per;
	cout<<"Enter the marks of 5 subject ";

	for(int i=0;i<5;i++){
		cin>>marks[i];
		sum+=marks[i];
	}
	avg=sum/5;
	cout<<"Average is"<<avg<<endl;
	per=sum/500;
	cout<<"Percentage is "<<per<<endl;
	return 0;
}
