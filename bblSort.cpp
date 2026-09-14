#include <iostream>
using namespace std;

 int main()
 {  
    int a,b,z=0, j=0;
    int i=0;
    int p[]={2, 5, 7, 3, 9, 4, 8, 1};
    while (z <= 8){
        while (i<=6){
            if( p[i] > p[i+1] ){
                a=p[i];
                b=p[i+1];  //swap happens here
                p[i+1]=a;
                p[i]=b;
            } else {
                p[i+1]=p[i+1];
                p[i]=p[i];     //idk what else to put here
            }
            i++;
        };
        i=0;//resets after each iteration
        z++;
    };
    while(j<=7){
        cout << p[j] << " ";
        j++;                  //prints the sorted array
    }
 }
