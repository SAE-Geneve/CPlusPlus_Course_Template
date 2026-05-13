#include <iostream>
// Template class
template<typename Tcoord>
struct Point {
    Tcoord x;
    Tcoord y;

    const Tcoord operator+(const Tcoord& other) const{
        return {x + other.x, y + other.y};
    }

    static float distance(Point a, Point b){
        return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y,2));
    }

};


int main(){

    Point<int> int_point{1,2};
    Point<float> A{1.0f, 2.0f};
    Point<float> B{3.0f, 4.0f};

    Point<float>::distance(A, B);


}