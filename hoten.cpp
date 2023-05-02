#include<iostream>
#include<string.h>
const int n=5;
using namespace std;
int sosanh(char *hoten1,char *hoten2)
{
    int i;
    int pos1=0;
    for(pos1=strlen(hoten1);pos1>0;pos1--)
    if(hoten1[pos1]==' ') break;

    int pos2=0;
    for(pos2=strlen(hoten1);pos2>0;pos2--)
    if(hoten2[pos2]==' ') break;
    
    return strcmp(hoten1+pos1+1,hoten2+pos2+1);
}

void sapxep(char DS[n][31],int n)
{
    char tmp[31];
    for(int i=n;i>1;i--)
    for(int j=1;j<i;j++)
    if(strcmp(DS[j-1],DS[j])>0)
    {
        strcpy(tmp,DS[j-1]);
        strcpy(DS[j-1],DS[j]);
        strcpy(DS[j],tmp);
    }

}
void tach(char hoten[],char *ten)
{
    int pos;
    int i;
    for(pos=strlen(hoten);pos>0;pos--)
    {
        if(hoten[pos]==' ') break;
    }
    strcpy(ten,hoten+pos+1);
    
}
int main()
{
   char DS[n][31];
   char DSTEN[n][31];
   for(int i=0;i<n;i++)
   gets(DS[i]);
   
   for(int i=0;i<n;i++)
   tach(DS[i],DSTEN[i]);

   sapxep(DS,n);

   for(int i=0;i<n;i++)
   cout<<"\n"<<DS[i];

    return 0;


}