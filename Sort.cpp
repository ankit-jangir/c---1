#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> arr = {4,5,6,1,2,3};
    sort(arr.begin(),arr.end());
    for(auto value:arr){
        cout<<value<<" ";
    }
    return 0;
}
