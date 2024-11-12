# include <iostream>
using namespace std;
class RectArea{
    private:
        float Length;
        float Width;
        float area;
    public:
        RectArea(){
            Length=0;
            Width=0;
        }   
        RectArea(int L){
            Length=L;
        }
        RectArea(int L, int W){
            Length=L;
            Width=W;
        }
        RectArea(RectArea& obj){
            Length= obj.Length;
            Width= obj.Width;
        }
        void sqArea(){
            area=Length*Length;
        }
        void rectArea(){
            area=Length*Width;
        }
        float getSqArea(){
            return area;
        }
        float getRectArea(){
            return area;
        }
};
int main(){
    RectArea obj1(2);
    RectArea obj2(2,6);
    RectArea obj3;
    obj3=obj2;
    obj1.sqArea();
    cout<<"The Area of Square is "<<obj1.getSqArea()<<endl;
    obj2.rectArea();
    cout<<"The Area of Rectangle is "<<obj2.getRectArea()<<endl;
    return 0;
}