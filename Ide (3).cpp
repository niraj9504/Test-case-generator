#include<bits/stdc++.h>
using namespace std;
int main(){
     srand(time(NULL));   // gives each time different value
     int t=rand()%10 +1; //test cases from 1 to 10
     cout<<t<<"\n";
     while(t--){
          int n=rand()%10+1; //length of array 
          cout<<n<<"\n";
          for(int i=0;i<n;i++){
               cout<<rand()%20+1<<" ";
          }
          cout<<"\n";
     }
     
     return 0;
}
