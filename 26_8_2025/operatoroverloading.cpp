#include<iostream>
using namespace std;

class complex{
    private:
    int r;
    int i;

    public:
    complex(){
        cout<<"Default Constructor";

    }
    complex(int r,int i){
        this->r=r;
        this->i=i;

    }
    void display(){
        cout<<"Expression "<<r<<"+"<<i<<"i"<<endl;
    }

    complex operator +(complex& c){
        int r1=this->r+c.r;
        int i2=this->i+c.i;
        complex result(r1,i2);
        return result;

    }
};

int main(){
    complex c1(10,11);
    complex c2(12,24);
    complex c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
}