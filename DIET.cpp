#include <iostream>
#include<math.h>
using namespace std;
int main() {
int T;
int i;
int K,N,l=0;
cin>>T;
if(1<=T<=200){
while(T--){
cin>>N;
cin>>K;
int arr[N];
if(1<=N<=100){
    if(1<=K<=10){
for(i=0;i<N;i++){
cin>>arr[i];
}
if(arr[0]>K){
for(i=0;i<N;i++){
    if(i==(N-1)){
  cout<<("Yes")<<endl;
    }
    l=arr[i]-K;
    
    arr[i+1]=arr[i+1]+l;
    if((arr[i+1]<K)&&(i!=N-1)){ 
    cout<<("NO ")<<(i+2)<<endl;
    ;       
   break;
         } 
  }
}
    else
    cout<<("NO ")<<('1')<<endl;
}
}
}
}
return 0;
}
