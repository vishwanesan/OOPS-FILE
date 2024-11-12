#include<iostream>
using namespace std;
class sample{
    int m;
    void read(void){
        cout<<"enter the value of m:";
        cin>>m;

    }
    public:
    void update(void);
    void write(void);

};
void sample :: update(){
    read();
}
void sample :: write(void){
   
    cout<<"value of m:"<<m<<endl;

}
int main(){
    sample obj1;
    obj1.update();
    obj1.write();
    return 0;
}
