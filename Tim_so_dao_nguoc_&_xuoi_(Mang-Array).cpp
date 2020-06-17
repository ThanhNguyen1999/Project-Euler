#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int dem =0;
	int x=n ;
	int y ;
	int z = 1;
	int u = 1;
	int t;
	while(x != 0)
	{
		x =x /10;
		
		dem++;
	}
	int mang[dem];
	
	cout<<dem<<endl;
	int mangnguoc[y];
	//So Dao Nguoc
	for( int i = 0 ; i< dem ; i++)
	{
		y = (n /z )%10 ;
		z*=10;
		
		mang[i]=y;
			cout<<y;
	
	}
	cout<<endl;
	//So Dao Xuoi
	for( int i = 0 ; i< dem ; i++)
	{
		t = (n /u ) ;
		
		
		mang[i]=t;
			
	
	}
	
	cout<<t;
	
	
	
	
	
	system("pause");
	return 0;
}
