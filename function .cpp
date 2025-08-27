#include<bits/stdc++.h>
using namespace std;
class sumi{
    public:
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }

};
int main(){
    sumi* my=new sumi();
    my->sum(7,6);
    my->sum(1,2,3);

return 0;
}