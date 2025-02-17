#include<iostream>
using namespace std;

int main(){
  string s="dskjfndkjfnkejbvkjdzzvbv";

  int freq[26];
  for(int i=0; i<s.length(); i++){
    freq[i]=0;
    freq[s[i]-'a']++;
  }
  // cout<<s<<endl;

  for(int i=0; i<26;i++){
      cout<<freq[i]<<"\t";
  }
}