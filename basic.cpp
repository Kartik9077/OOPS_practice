#include<bits/stdc++.h>
using namespace std;
class base{
public:
    string name,dept;
    char rool_no;
  base(string name,int rool_no){
    this->name=name;
    this->rool_no=rool_no;
  }
  base(string name){
    this->name=name;
  }
  base(string name,int rool_no,string dept){
    this->name=name;
    this->rool_no=rool_no;
    this->dept=dept;
  }
  void add(int a,int b,int c){
    cout<<a+b+c<<endl;
  }
  void add(int a,int b,char c){
    cout<<a+b<<endl;
    cout<<c<<endl;
  }
  base(){
    cout<<"i am a constructor"<<endl;
  }
  
};
int main(){
    base k;
    base a("kartik",3,"b.tech");
    a.add(7,8,9);
    a.add(2,4,'4');

}