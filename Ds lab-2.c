// write c programs to find maximum and minimum using arrays.
#include <stdio.h>
int main(){
    int a[]={1,4,3,2,5,9};
    int i,max=a[0],min=a[0];
    for(i=0;i<6;i++){
        if(a[i]>max){
        max=a[i];
        }
        
        if(a[i]<min){
        min=a[i];}
    
    }
    printf("the maximun value is:%d\n", max);
    printf("the minimum value is:%d\n", min);
}
