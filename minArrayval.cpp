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
        }else{        //main loop that checks minimum value
          o=a[i];    
          m=i;
        }
        z=o;//prevents a ram bug
        i++;//incrementing the loop
        }
        //swap happens here
        n=a[p];
        a[p]=z;
        a[m]=n;
        p++; //incrementing this loop
    }
  while (k <= 4){
        cout << a[k] << " ";
        k++;                    //loop for printing the array
    }
}
