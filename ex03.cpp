#include <iostream>

using namespace std;

void min_max(int*arr,int size,int*min,int*max){
    *max=*arr;
    *min=*arr;
    for(int* p=arr+1;p<arr+size;p++){
        if(*p>*max){
            *max=*p;
        }
        if(*p<*min){
            *min=*p;
        }
    }
}
    

int main(){

    int a[5]={5,10,3,20,16};
    int y,x;
    min_max(a,5,&y,&x);
    cout<<"najmniejsza: "<<y<<endl;
    cout<<"najwieksza:"<<x<<endl;


    int b[5]={1,50,2,158,200};
    min_max(b,5,&y,&x);
    cout<<"najmniejsza: "<<y<<endl;
    cout<<"najwieksza:"<<x<<endl;
  
  
    return 0;

}