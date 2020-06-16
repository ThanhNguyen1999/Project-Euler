#include <iostream>
using namespace std;
int main ()
{
    unsigned long long n;
    cout<<"Nhap vao so nguyen n: ";
    cin>>n;
    int dem = 0 ;
    while (n != 0)
	{
        n = n /10; 
    dem++;
        
	} 

       
    cout<<"So luong chu so cua so nguyen la: "<< dem <<endl;
    }
