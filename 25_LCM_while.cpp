//LCM ke liye m bada wala and m++
#include<iostream>
using namespace std;
int main(){
	int a,b,m;
	cout<<"Enter the two no a and b "<<endl;
	cin>>a>>b;
	if (a>b)
		m=a;
	else
		m=b;
	while(1)
	{
		if((m%a==0)&&(m%b==0))
			break;
		else 
			m++;
	}
	cout<<"LCM of a= "<<a<<" and b "<<b<<" is "<<m<<endl;
	return 0;
}



