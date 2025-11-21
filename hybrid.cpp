#include<iostream>
using namespace std;

class Animal{
    public:
    void bae(){
cout<<"All animal belongs to this class";
    }
};
class land{
    public:
    void lala(){
        cout<<"these animal lives in the land "<<endl;
    }
};
class Water {
    public:

    void aqautic(){
        cout<<"These animal live in the water"<<endl;
    }
};

class waterandland: public land , public Water{
    public:
    void amphibian(){
        cout<<"these animals live in water and land both"<<endl;
    }
};

int main(){
    waterandland obj;
    obj.aqautic();
    obj.lala();
    obj.amphibian();
    return 0;

}