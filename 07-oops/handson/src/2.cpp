#include<iostream>

using namespace std;

class Rect
{
    private:
    float tx,ty,bx,by,width,height;
    /* data */
    public:
        float getWidth(void){
            //cout<<width;
            return width;
        }
        float getHeight(void){
            //cout<<height;
            return height;
        }
        void setWidth(float wid){
            width=wid;
        }
        void setHeight(float heig){
            height=heig;
        }

};


int main(){
    Rect rect;
    rect.setWidth(5);
    rect.setHeight(6);
    // rect.getHeight();
    // rect.getWidth();
    cout<<rect.getWidth()<<"\n"<<rect.getHeight();
    return 0;
}