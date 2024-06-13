#include <iostream>
#include <vector>
using namespace std;
  
int main(){
    int arr = [2,3,4,5,6,6];
    int tofind = 5;
    int output = findvalue(arr,tofind);

    if(output){}

}




void ispresent(int arr[5],int tofind){
    for(auto value:arr){
        if(value==tofind){
            return ture ;

        }
    }
    return false;
}







// int main() {
//     vector<int> arr = {4, 5, 6, 1, 2,7 };

//     for (int i = 5; i < arr.size(); i++) { 
//         if (arr[i] == 5) {
//             cout << "match" << endl; 
//         } else {
//             cout << "not match" << endl;  
//         }
//     }

//     return 0;
// }
