#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
/*ham sinh so ngau nhien :
+ su dung ham rand() trong thu vien stdlib 

int main(){
    int r;
    for(int i = 0; i < 5; ++i){
        r = rand();
        printf("Rand %d is %d\n",i, r);
    }    
}
 
+co the su dung them ham srand de sinh ra cac so ngau  nhien 
srand((int) time(0));

int main(){
    int r;
    srand((int)time(0));
    for(int i = 0; i < 5; ++i){
        r = rand();
        printf("Rand %d is %d\n",i, r);
    }    
}

+sinh so ngau nhien trong doan min max 
int r = minN + rand() % (maxN + 1 - minN)
vd :
int r = 5 + rand() % (10 + 1 - 5)
// Hay viet gon hon
int r = 5 + rand() % 6
*/
int main()
{
	//random tu 1 den 100
	int n;

	srand((int)time(0));
	for(int i=0;i<5;i++)
	{
		n = rand() % 100 + 1;
     cout<<"\t"<<n;
	}
	 
	return 0;
}
	
