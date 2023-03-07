#include<stdio.h>
int main(){
    printf("hay nhap cac pt trong mang: \n");
    int s=0;
    int a[s];
    while (a[s]!=0)
    {
        int n;
        printf("a[%d]: ",s);
        scanf("%d",&a[s]);
        int d = a[s];
        ++s;
        if (d==0){
            break;
        }
   int tg;
    for(int i = 0; i < s ; i++){
        for(int j = i ; j < s; j++){
            if(a[j] < a[i]){
                tg = a[j];
                a[j] = a[i];
                a[i] = tg;        
            }
        }
    }
    }   
    for (int i = 0; i < s; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}