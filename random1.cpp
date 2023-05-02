#include<iostream>
#include<stdlib.h>
#include<time.h>
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
	
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<*(p+i);
	}
	
	return 0;
}
