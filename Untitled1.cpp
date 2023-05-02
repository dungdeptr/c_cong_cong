#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

typedef struct {
	char id[20];
	char giam_doc[20];
	double von;
	int so_nhan_vien;
}cty;

void nhap(cty &a)
{
//	cout<<"\nid:";
	fflush(stdin);
	fgets(a.id,sizeof(a.id),stdin);
	a.id[(strlen(a.id)-1)]='\0';
//	cout<<"\ngiam doc: ";
	fgets(a.giam_doc,sizeof(a.giam_doc),stdin);
	a.giam_doc[(strlen(a.giam_doc)-1)]='\0';
//	cout<<"\nvon dieu le : ";
	cin>>a.von;
//	cout<<"\nso nhan vien: ";
	cin>>a.so_nhan_vien;
}
void nhapdanhsach(cty a[],int n)
{
	for(int i=0;i<n;i++)
	{
	//	cout<<"\ndoanh nghiep thu : "<<i+1;
		nhap(a[i]);
	}
}
void xuat(cty a)
{
	cout<<"\nid:"<<a.id;
	cout<<"\ngiam doc: "<<a.giam_doc;
	cout<<"\nvon dieu le : "<<a.von;
	cout<<"\nso nhan vien: "<<a.so_nhan_vien;
	
}
void xuatdanhsach(cty a[],int n)
{
	for(int i=0;i<n;i++)
	{
		//cout<<"\ndoanh nghiep  thu"<<i+1;
		xuat(a[i]);
	}
}

void sapxep(cty a[],int n)
{
	cty x;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].von>a[j].von)
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	xuatdanhsach(a,n);
}
void tm(cty a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].so_nhan_vien >300 || (a[i].id[0]=='D'&&a[i].id[1]=='N'))
		xuat(a[i]);
	}
}
int kiem_tra(cty a)
{
	for(int i=0;i<(strlen(a.id)-1);i++)
	{
		if(a.id[i]==' ')
		return 1;
		
	}
	return 0;
}

void ktra(cty a[],int n)
{
     for(int i=0;i<n;i++)
     {
     	if(a[i].von<10||kiem_tra(a[i])==1)
     	xuat(a[i]);
	 }
}
int main()
{
	cty a[10];
	int n;
	cout<<"\nnhap n:";
	cin>>n;
	nhapdanhsach(a,n);
	cout<<"\n\n\nxuat";
	
	xuatdanhsach(a,n);
	cout<<"\n\n\nsap xep danh sach tang dan";
	sapxep(a,n);
	
	cout<<"\nma doanh nghiep vip la :\n";
	tm(a,n);
	 
	cout<<"\ndoanh nghiep khong hop le la :\n";
	ktra(a,n);
	
}
