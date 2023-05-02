#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const int line=17;

void chuan(char *a)
{
    a[strlen(a)-1]='\0';
}

int main()
{
    FILE *f;
    char filename[]="D:\\c\\tuan2\\bai2.txt";
    f=fopen(filename,"r");
    char **words;
    words=(char**)malloc(sizeof(char*)*line);
    char buff[30];
    int i;
    i=0;
    while(fgets(buff,30,f)!=NULL)
    {
        words[i]=(char*)malloc(sizeof(char)*(strlen(buff)+1));
        strcpy(words[i],buff);
        chuan(words[i]);
        printf("\ntu %s:",words[i]); 
        i++;
    }
    
    char tim[30];
    
    while(1){
    printf("\nnhap vao tu can tim:");
    gets(tim);
    printf("\ntu %s :",tim);
    int n;
    n=0;
    for(i=0;i<line;i++)
    {
        if(strcmp(tim,words[i])==0)
        {
            printf("\ntu do co ton tai trong tu dien");
            n++;
        }
    }
    if(n==0)
    printf("\ntu ko ton tai trong tu dien");
    }
    

    for(i=0;i<line;i++)
    free(words[i]);
    free(words);
    fclose(f);
    return 0;

}