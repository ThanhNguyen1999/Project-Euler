#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Tinh so ngay trong nam"<<endl;
	cout <<"Nhap Nam can tinh:"; cin>>x;
	if (x % 4 == 0)
	{
		cout<< "So nam ban nhap: "<<x <<" la nam Nhuan" <<endl;
		cout<<"Nam: "<<x<<" co 366 ngay";
	}

	else
	 {
		cout <<"So nam ban vua nhap: "<< x <<" la Nam Khong Nhuan"<<endl;
		cout <<"Nam: "<<x<<" co 365 ngay"<<endl;
		
	}
	
	system("pause");
	return 0;
}
