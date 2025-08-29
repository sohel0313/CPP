#include<iostream>
using namespace std;

class car{
    public:virtual void speed(){
        cout<<"Basic Speed of car is 60 km/hr"<<endl;
    }

};

class minicar:public car{
    void speed(){
        cout<<"Speed of minicar is 80 km/hr"<<endl;
    }
};

class suv:public car{
    public:
    void speed(){
        cout<<"Speed of suv is 400 km/hr"<<endl;
    }
    void safety(){
        cout<<"It provides AirBags"<<endl;
    }
};

class racing:public car{
    public:
    void speed(){
        cout<<"Speed of racing is 800 km/hr"<<endl;
    }
    void nos(){
        cout<<"It provides Nitrogen Cylinder for extra speed"<<endl;
    }
};

int main(){
    car c;
    minicar nano;
    suv thar;
    racing ferrari;

    car *baseptr=&thar;
    baseptr->speed();

    if(typeid(*baseptr)==typeid(suv)){
    cout<<" dynamically basptr holding address of SUV type"<<endl;
    suv *obj=dynamic_cast<suv*>(baseptr);
    obj->safety();
    }
    else if (typeid(*baseptr)==typeid(racing))
    {
    cout<<" dynamically basptr holding address of racing type"<<endl;
    racing *obj=dynamic_cast<racing*>(baseptr);
    obj->nos();
    
    }
    

    else
    {
    cout<<"\t\t it is of minicar type"<<endl;
    }

    car *arr[3];
    arr[0]=&c;
    arr[1]=&thar;
    arr[2]=&ferrari;

    cout<<"-----overloading and RTTI up casting downcating-----"<<endl;

    for(int i=0;i<3;i++){
        arr[i]->speed();

        if(typeid(*arr[i])==typeid(suv)){

            cout<<"------------------suv--------------"<<endl;
            cout<<"dynamically basptr holding address of SUV type"<<endl;
            suv *obj=dynamic_cast<suv*>(baseptr);
            obj->safety();
        }
        else if (typeid(*arr[i])==typeid(racing))
        {
            cout<<"------------Racing----------"<<endl;
            cout<<"dynamically basptr holding address of racing type"<<endl;
            racing *obj=dynamic_cast<racing*>(baseptr);
            obj->nos();
    
    }
    }

}