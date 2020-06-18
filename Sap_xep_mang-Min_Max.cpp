#include<bits/stdc++.h>
#include<iomanip>
#define foreach(length) for(int i = 0; i < length; ++i)
using namespace std;

int getlength(int n){

return to_string(n).length();
}
void addArray(int n,int *arr,int length){
	 	int j = 1;
		 foreach(length){
			 arr[i]=( n/j)%10;
			 j*=10;
		 }

}

void sortArray(int *arr, int length){
	for(int i = 0 ; i<length-1 ; i++)
		{
			for(int j = i +1 ; j <length ;j++)
			{
				
				if(arr[j]< arr[i]){
					int x;
					x=arr[i];
					arr[i]=arr[j];
					arr[j]=x;
				}
			}
		}
}

int main() {
	int n;
	cin>>n;
	int doto=getlength(n);
	int mang[doto];

	addArray(n,mang,doto);
	sortArray(mang,doto);
	foreach(doto)
	cout<< mang[i]<<endl;
	cout<<"Min ="<<mang[0]<<endl;
	cout<<"Max ="<<mang[doto-1];
	cout<<endl;
	system("pause");
	return 0;
}