#include<bits/stdc++.h>
#include<iomanip>
#define foreach(length) for(int i = 0; i < length; ++i)
using namespace std;

int main() {

	int n;
	cout<<"Nhap km:";
	cin>>n;
	int tienkm;
	int tong ;
	int giamgia = 1;

  while(n == 0)
	{
		cout<<"Nhap 0 vao thi di deo dau, moi nhap lai km:";
		cin>>n;
	}
	if( n <= 1)
	{
			tienkm= 11000;
	tong= (tienkm * n) * giamgia;

	}	
	else if(n > 120){
		tienkm= 12000;
		giamgia = (tienkm * n) * (0.1);
		cout<<tienkm <<endl;
		cout<<giamgia<<endl;
		tong = (tienkm * n) - giamgia;

	}
	else if (1<n<=31)
	{
		tienkm =15100;
	tong= (tienkm * n) * giamgia;
		cout<<tienkm <<endl;

	}
	else{
		tienkm = 12000;
	tong= (tienkm * n) * giamgia;

	}
	
	cout<< tong<<"d";
	cout<<endl;
	system("pause");
	return 0;
}