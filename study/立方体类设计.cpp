#include <iostream>

using namespace std;
class Cube{
public:

    double getL(){
        return m_L;
    }

    double getW(){
        return m_W;
    }

    double getH(){
        return m_H;
    }
    void setL(double L){
        m_L = L;
    }

    void setW(double W){
        m_W = W;
    }

    void setH(double H){
        m_H = H;
    }

    double V(){
        return m_L * m_W * m_H;
    }

    double S(){
        return (m_L * m_W  + m_L * m_H + m_W * m_H) * 2;
    }

    // 利用成员函数判断两个立方体是否相等
    bool isSameByClass(Cube &c)
    {
        if (m_H == c.getH() && m_L == c.getL() &&m_W == c.getW()){
        return true;
    }
    return false;
    }
private:
    double m_L;
    double m_W;
    double m_H;
};

// 利用全局函数判断 两个立方体是否相等
bool isSame(Cube &c1, Cube &c2){
    if (c1.getH() == c2.getH() && c1.getL() == c2.getL() &&c1.getW() == c2.getW()){
        return true;
    }
    return false;
};
int main(){
    Cube c1;
    c1.setH(10.0);
    c1.setL(10.0);
    c1.setW(10.0);
    cout << c1.S() << endl;
    cout << c1.V() << endl;

    Cube c2;
    c2.setH(10.0);
    c2.setL(10.0);
    c2.setW(10.0);

    // 利用全局函数判断 两个立方体是否相等
    bool ret = isSame(c1, c2);
    cout << ret << endl;

    // 利用成员函数判断两个立方体是否相等
    bool ret2 = c1.isSameByClass(c2);
    cout << ret2 << endl;
    return 1;
}