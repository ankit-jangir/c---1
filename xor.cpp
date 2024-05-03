#include<iostream>
#include<vector>
using namespace std;



int findUniqueElement(vector<int> value){
   int uniqueaValue = 0;
   for(int i=0;i<value.size();i++){
      uniqueaValue=uniqueaValue ^ value[i];

   }
   return uniqueaValue;
}
int main(){
   vector<int>value={1,1,5,4,4};
   int uniqueaValue=findUniqueElement(value);
   cout<<"Unique Value :"<<uniqueaValue<<endl;



}