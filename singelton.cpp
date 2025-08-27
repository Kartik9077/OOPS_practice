#include<bits/stdc++.h>
using namespace std;
class singleton{
  private:
    static singleton* pointer;
  singleton(){
    cout<<"this is singelton clas object"<<endl;
  }
  public:
    static singleton* instance(){
    if(pointer==nullptr){
        pointer=new singleton();
    }
    return pointer;
   }
};
singleton* singleton::pointer=nullptr;
int main(){
    singleton* s1=singleton::instance();
    singleton* s2=singleton::instance();
    singleton* s3 =singleton::instance();
    cout<<(s1==s2)<<endl;
    cout<<(s1==s3)<<endl;
    return 0;

}