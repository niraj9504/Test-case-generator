#include<bits/stdc++.h>
using namespace std;
int main(){
     srand(time(NULL));
     int t=rand()%10+1;
     cout<<t<<endl;
     while(t--){
          int n=rand()%50 + 1; // number of char to be generated
          cout<<n<<"\n";
          for(int i=0;i<n;i++){
               char c='a'+rand()%25;
               cout<<(c)<<" ";
          }
          cout<<endl;
     }
     return 0;
}