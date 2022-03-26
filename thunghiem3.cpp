#include <iostream>
using namespace std;
int main(){
 int a,b;
 do{
 cout<<"Nhap a: ";cin>>a;
 cout<<"Nhap b: ";cin>>b;
 if(a<0||b<0)cout<<"Vui long nhap lai!!!"<<endl;
   } while(a<0||b<0);
   int s=0;
  for(int i=1;i<a;i++){
       if(a%i==0)s+=i;
    }
    int s1=0;
  for(int i=1;i<b;i++){
  	if(b%i==0)s1+=i;
  }
  if(s==b&&s1==a)cout<<a<<" va "<<b<<" la ban be ";
  else cout<<a<<" va "<<b<<" khong la ban be"; 
return 0;
 }
