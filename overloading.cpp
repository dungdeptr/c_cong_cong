#include<iostream>
//overloading se tu dong chon mang co  ten giong nhau sao cho phu hop vs tham so dau vao 

using namespace std;

int abs(int a)
{
	if(a<0)
	return -a;
	else return a;
}
double abs(double a)
{
	if(a<0)
	return -a;
	else return a;
}
int main()
{
	int a=5;
	double b=-6.5;
	char c='a';
	cout<<"tri tuyet doi cua so int la :"<<abs(a)<<endl;
	cout<<"tri tuyet doi cua so double la:"<<abs(b)<<endl;
	cout<<"tri tuyet doi cua so char la:"<<abs(c)<<endl;
	
}
