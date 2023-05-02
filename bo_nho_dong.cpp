#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() 
{
	int n;
	cout<<"\nnhap vao so phan tu :";
	cin>>n;
	
	int *p;
	p = new int[n];
	/*
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap phan tu thu "<<i+1<<endl;
		cin>>*(p+i);
	}
	*/
	
	//random
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++)
	{
		*(p+i)=rand()%99 +1;
	}
	//xuat ra
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<*(p+i);
	}
	//sap xep
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			swap(*(p+i),*(p+j));
		}
	}
	//xuat ra 
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<*(p+i);
	}
	//
	return 0;
}
