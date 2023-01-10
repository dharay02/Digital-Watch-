#include<stdio.h>
#include<windows.h>

int main(){
    int h , m , s ; 
    scanf("%d%d%d",&h,&m,&s);
    int d = 1000;
    while(1){
        s++;
        if(s>59){
            m++;
            s =0;
        }
        if(m >59){
            h++;
            m= 0;
        }
        if(h>12){
            h = 1;
        }
        printf("%d :%d :%d",h , m , s);
        Sleep(d);
        system("cls");
    }
    return 0;
}