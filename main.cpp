#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dim=0;
    cout<<"inserire dimensione";
    cin>>dim;
    float array[dim];
    cout<<"inserire"<<' '<<dim<<' '<<"numeri";
    for(int i=0;i<dim;i++){
        cin>>array[i];
    }
    cout<<max(array,dim);
    return 0;
}
