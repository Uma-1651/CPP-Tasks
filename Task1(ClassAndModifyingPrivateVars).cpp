#include<iostream>
using namespace std;
class numbers{
    int c=10;
    public:
    int a,b;
    numbers(int A,int B){
        a=A;
        b=B;
    }
    void getAdd(){
        cout<<a+b;
    }
    void check(){
        cout<<"Current Value of Private Variable is: "<<c<<endl;
    }
    void Modify(int var){
        c=var;
        cout<<"Modified"<<endl;
    }
};
int main(){
    int x,y;
    cout<<"enter 2 numbers for object"<<endl;
    cin>>x>>y;
    numbers b(x,y);
    b.getAdd();
    cout<<"Enter Value to be Modified"<<endl;
    int var;
    cin>>var;
    b.check();
    b.Modify(var);
    b.check();
    return 0;
}