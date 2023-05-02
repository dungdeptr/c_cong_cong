#include<iostream>
using namespace std;
//co tac dung lon trong cac chuong trinh lon 
//tang toc do chay chuong trinh
inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	cout << max(3, 6) << '\n';
	cout << max(6, 3) << '\n';

	return 0;
}
