#include<iostream>
using namespace std;
//giong voi struct nhung ma thay vi truy xuat bien thi truy xuat mang trong class
class SinhVien{
	private:
		string ten;
		string masv;
		int tuoi;
	public:
		SinhVien(){
			ten = "nguyen van a";
			masv = "00000";
			tuoi = 19;
		}
		void choigame()
		{
			cout<<"\nchoi game";
			
		}
		void docsach()
		{
			cout<<"\n doc sach";
			
		}
		void xuat(SinhVien a){
			cout<<endl<<a.masv<<"\t"<<a.ten<<"\t"<<a.tuoi;
		}
};
int main()
{
	SinhVien a;
	a.choigame();
	a.docsach();
	a.xuat(a);
}
