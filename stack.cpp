//doi vs ham stack thi vao trc dung sau con vao sau dung truoc
//vd vao trc lay ra sau cung vao sau lay ra trc 
// giong nhu voi lay sach ra tu chong sach
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> a;
	int a1,a2,a3;
	cin>>a1;
	cin>>a2;
	cin>>a3;
	a.push(a1);
	a.push(a2);
	a.push(a3);
	cout<<"\nphan tu dau tien la "<<a.top();
	a.pop();
	cout<<"\nphan tu dau tien sau khi lay ra la : "<<a.top();
	
}
