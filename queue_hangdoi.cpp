#include<iostream>
#include<queue>
#include<string.h>
#include<stdio.h>
//doi voi ham queue thi vao truoc dung trc cung vao sau dung sau 
//vd vao truoc lay ra dau tien vao vao sau lay ra sau
using namespace std;
typedef struct {
	int id;
	string ten;
	
}sv;
void nhap(sv &a)
{
//	cout<<"nhap id: ";
	cin>>a.id;
//	cout<<"\nnhap ten :";
fflush(stdin);
	getline(cin,a.ten);
}
void xuat(sv a)
{
	cout<<"nhap id: "<<a.id;
	cout<<"\nnhap ten :"<<a.ten;
}

int main()
{
   queue<sv> a;
   sv b1, b2, b3;
   nhap(b1);
   nhap(b2);
   nhap(b3);
   a.push(b1);
   a.push(b2);
   a.push(b3);
   cout<<"\nsinh vien dau tien :\n";
   xuat(a.front());
   a.pop();
    cout<<"\nsinh vien dau tien :\n";
   xuat(a.front());
   
   
    
	return 0;
}
