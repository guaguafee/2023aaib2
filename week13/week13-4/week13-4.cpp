//week13-4.cpp
//�ƨg�{�]-----(SOIT108_Advance_006_C_CPP) �i���D�G�D��Ƥ��̤j���]�� : ��Ja, b��ơA�ХΨ�Ʀ��]�p�A�D��Ƥ��̤j���]�ơAa ,b > 0�C
#include<iostream>
using namespace std;
int GCD(int a, int b){
  if(a==0) return b;
  if(b==0) return a;
  return GCD(b, a%b);
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
