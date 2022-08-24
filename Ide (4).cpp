#include<bits/stdc++.h>
using namespace std;
int main(){
     srand(time(NULL));
     int t=rand()%10+1;
     cout<<t<<endl;
     while(t--){
          int len=rand()%5 + 1; // length of strings to be generated
          cout<<len<<"\n";
          string s="";
          for(int i=0;i<len;i++){
               char c='a'+rand()%25;
               s+=c;
          }
          cout<<s<<endl;
     }
     return 0;
}