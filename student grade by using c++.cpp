#include<iostream>
using namespace std;
int main(){
	int result;
	cout<<" enter result of student";
	cin>>result;
	
	

	if(result<0||result>100)
	
	cout<<"invalied result";

	else if(result>=90)
	cout<<" A+ ";
	else if(result>=85)
	cout<<"A";
	else if(result>=80)
	cout<<"A-";
	else if(result>=75)
	cout<<"B+";
	else if(result>=70)
	cout<<"B";
	else if (result >=65)
	cout<<"B-";
	else if(result>=60)
	cout<<"C+";
	else if(result>=50)
	cout<<"C";
	else if (result>=40)
	cout<<"D";
	else 
	cout<<"F";
	 
	return 0;
}


