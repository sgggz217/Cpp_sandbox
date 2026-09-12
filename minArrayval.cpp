#include <iostream>
using namespace std;

int main(){
    int i,z,m,k=0,o,n,p=0;
    int a[5]= {7,12,9,11,3};


    while (p<=4){  
        o=a[p]; 
        i=p;
        while ( i<= 4) { 
        if ( o < a[i]){
            z=o;
        }else{
          o=a[i];
          m=i;
        }
        z=o;
        i++;
        }
        n=a[p];
        a[p]=z;
        a[m]=n;
        p++;
    }
  while (k <= 4){
        cout << a[k] << " ";
        k++;
    }
}