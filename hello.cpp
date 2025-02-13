#include<bits/stdc++.h>
using namespace std;


class Student{

  Student(){
    cout<<"Constructor callled"<<endl;
  }
  public:
    string name;
    string add;

    double salary;

    void changeSal(double newSal){
        salary=newSal;
    }

    ~Student(){
      cout<<"I am deleting the objects with the new keyword"<<endl;
    }
};

int main(){
  Student s1;

  s1.name="Dhrax";
  s1.salary=1213.45;

  cout<<"student 1 salary "<<s1.salary<<endl;
  cout<<s1.name<<endl;
  return 0;
}