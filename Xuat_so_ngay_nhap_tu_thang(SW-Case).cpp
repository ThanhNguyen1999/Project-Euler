#include <bits/stdc++.h>
#include <iomanip>
#define foreach (length) for(int i = 0; i < length; ++i)
using namespace std;



bool Leap_Year(int n){
/* 	if (( n / 400 == 0)||(n/4 == 0)) {
		n =true;
	}
	else
	
		n=false; */
	return ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0));
};

int main() {
		cout<<"Nhap Thang: ";
	 int thang;
	 cin>>thang ;
	 int nam;
	 cout <<"Nhap Nam: ";
	 cin>>nam;

	 


	switch (thang)
	{
	case 1:
		cout<<"31";
		break;

	case 2:
		// if(Leap_Year(nam)){ cout <<"Day la Nam Nhuan "<<"Co 29 Ngay" } else { cout<<"Day la Nam K Nhuan"<<"Co 28 ngay"};
		Leap_Year(nam) ? cout <<"Day la Nam Nhuan "<<"Co 29 Ngay" : cout<<"Day la Nam K Nhuan"<<"Co 28 ngay";
		break;

		case 3:
		cout<<"31";
		break;

		case 4:
		cout<<"30";
		break;

		case 5:
		cout<<"31";
		break;

		case 6:
		cout<<"30";
		break;

		case 7:
		cout<<"31";
		break;

		case 8:
		cout<<"31";
		break;

		case 9:
		cout<<"30";
		break;

		case 10:
		cout<<"31";
		break;

		case 11:
		cout<<"30";
		break;

		case 12:
		cout<<"31";
		break;


	
	default:
		break;
	}
		
	cout<<endl;
	system("pause");
	return 0;
}