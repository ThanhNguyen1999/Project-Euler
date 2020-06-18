#include<bits/stdc++.h>
#include<iomanip>
#define foreach (length) for(int i = 0; i < length; ++i)
using namespace std;


int IsLeapYear (int n ){
	return ((n %400 == 0) ||(n % 4 == 0 && n %100 != 0));
}

int THG(int t , int n){
	switch (t)
	{
	case 1: case 3 :case 5 :case 7 :case 8 :case 10 :case 12:
	return 31;
		break;
	case 4: case 6 : case 9 : case 11:
	return 30;
	break;
	case 2: 
		return IsLeapYear(n) ? 29 :28 ;
		// if(IsLeapYear(n) == true)
		// return 29 :28 ;
		break;
	default:
	
		break;
	}

}




int main() {
	int nam,thang,ngay;
	cout<<"Nhap Ngay/Thang/Nam: "; 
	cin>>ngay>>thang>>nam;
	while (nam == 0)
	{
		cout<<"Moi nhap lai nam:";
		cin>>nam;
	}
	while (thang >12 || thang <=0)
	{
		cout<< "Moi Nhap lai thang: ";
		cin>>thang;
	}
	
while (ngay> THG(thang,nam) || ngay <=0)
{
	cout<< "Moi Nhap lai ngay: ";
	cin>>ngay;
	
}

	if(ngay == THG(12,nam) && thang ==12)
	{
			
			cout<<"Ngay:"<<1<<"/"<<1<<"/"<<++nam;
		
	}

	else if(ngay == THG(thang,nam))
	{
		cout<<"Ngay:"<<1<<"/"<<++thang<<"/"<<nam;
		
	}
 
	
	else{
			cout<<++ngay<<"/"<<thang<<"/"<<nam;
	}

	
// cout<<THG(thang , nam);







	cout<<endl;
	system("pause");
	return 0;
}