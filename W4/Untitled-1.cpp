// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
   cin>>str;
   int freq[100005]={0};
   int max=0;
   char result;
   for(int i =0 ; str[i] != '\0';i++){
      freq[str[i]]++;
    //   cout<<"freq:"<<freq[str[i]]<<endl;
      if(freq[str[i]]>max){
          max=freq[str[i]];
          result=str[i];
        //   cout<<"it is greater in freq:"<<result<<endl;
      }
      else if (freq[str[i]]==max){
          if(str[i] < result)
          {
              result=str[i];
            //   cout<<"it is smaller in ascii:"<<result<<endl;
          }
      }
     
    }
    cout<<result;
    return 0;
}