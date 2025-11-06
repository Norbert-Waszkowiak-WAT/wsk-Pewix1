#include <iostream>

using namespace std;

int my_strlen(const char* s){
    int a=0;
    while(*s !='\0'){
        a=a+1;
        s++;
    }
    return a;
}


int main(){

    char d[]="ad";
    cout<<my_strlen(d)<<endl;

    char g[]="bober";
    cout<<my_strlen(g)<<endl;
       


    
    return 0;
}