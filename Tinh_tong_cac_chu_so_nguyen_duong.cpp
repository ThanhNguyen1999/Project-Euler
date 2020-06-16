#include <iostream>
using namespace std;
int main ()
{
 	int n ;
 	cin>> n;
 	int x ;
 	int j =1;
 	int y =n ;
 	int dem = 0 ;
 	int tong = 0;
    while (y != 0)
	{
        y = y /10; 
    dem++;
        
	}   
	int db[dem];

 	for (int i = 0 ; i<dem; i++)
 	{
 		x = (n / j) % 10 ;
 		
		j*=10;
 		db[i]=x;
 		
// 		cout<<x<<endl;
// 		tong +=x;
			
	}
		
	for(int i =0 ;i<sizeof(db)/sizeof(db[0]) ; i++)
	{
//		sizeof(Db[])-sizeof(db[0])
		cout<< db[i]<<endl;
		tong+= db[i];
		
		
		
		
	}
	
	
	
	
	
	
	
	 cout <<tong;
	
//	 cout<<"So luong chu so cua so nguyen la: "<< dem <<endl;
    return 0;
    }
