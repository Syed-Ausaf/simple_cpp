//To print run i 1 to 100 and j 2 to i ;if i%j== 0 increment flag and break and then print i make flag 0 interate to next i inside for loop
//compare flag is 0 and i is not 1
#include<iostream>
using namespace std;
int main(){
	int i,flag=0,j;
	cout <<"Prime no bt 1 to 100 are "<<endl;
	for(i=1;i<=100;i++){
		for(j=2;j<i;j++){
			if(i%j == 0){
				flag++;
				break;
			}
		}
		if(flag==0 && i!=1)
			cout<<i<<endl;
			flag=0;
		
	}
	cout<<endl;
	return 0;
}
