#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	
	//bai 1
//	for(int i = 1 ; i<=n ; i++)
//	{
//		for (int j = 0; j<i; j++)
//		{
//			
//			cout<<"*";
//			
//		}
//		cout<<endl;
//	}
	
	//bai 2

//	for(int i =n ; i>=1 ; i--)
//	{
//			for (int j = 0; j<i; j++)
//		{
//			
//			cout<<"*";
//			
//		}
//		cout<<endl;
//	}
	

	
		
//	bai 3

		for(int i = 1 ; i<=n ; i++)
	{
		for (int j = i; j<n; j++)
		{
			
			cout<<"-";	
		}
		for (int j = 1; j<=2*i-1; j++)
		{	
			cout<<"*";	
		}
		
		
		cout<<endl;
	}
	
	
	system("pause");
	return 0;
		
}
