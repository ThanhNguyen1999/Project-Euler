#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int dem =0;
	int x=n ;
	int y ;
	int z = 1;
	
	int Max;
	int Min;
	while(x != 0)
	{
		x =x /10;
		
		dem++;
	}
	int mang[dem];
	
//	cout<<dem<<endl;
	
	
	for( int i = 0 ; i< dem ; i++)
	{
		y = (n /z )%10 ;
		z*=10;
		mang[i]=y;
		
		Max = mang[0];
		
		cout<<mang[i]<<endl;
	
	}
	//Max
	for(int i =0  ; i< dem ; i++)
	{
		
		if(mang[i] > Max)
			
			Max =mang[i];
		
	}
	//Min
	Min = mang[0];
	for(int i = 0 ; i< dem ; i++)
	{
		if(mang[i] < Min)
			 Min=mang[i];	
	}
	
		cout<<"Max:"<<Max<<endl;
		cout<<"Min:"<<Min<<endl;
	
	system("pause");
	return 0;
}
