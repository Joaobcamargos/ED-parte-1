#include<stdio.h>
int fatorialrecursivo(int k);

fatorialrecursivo(int k){
    if(k==1){
        return 1;
    }
    else{
        return k*fatorialrecursivo(k-1);
    }
}
int main(){
    int a;
a=fatorialrecursivo(5);
printf("%d",a);
return 0;
}