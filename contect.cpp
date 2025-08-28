#include<bits/stdc++.h>
using namespace std;
class singleton{
    private:
    static singleton* ptr;
    static mutex mtx;
    singleton(){
        cout<<"this is ingleton class"<<endl;
    }
    public:
    static singleton* instance(){
        
        if(ptr==nullptr){
            lock_guard<mutex>lock(mtx);
            ptr=new singleton();
        }
        return ptr;
    }
};
singleton* singleton::ptr=nullptr;
mutex singleton:: mtx;
int main(){
    singleton*a=singleton::instance();
    singleton*b =singleton::instance();
    cout<<(a==b)<<endl;

return 0;
}