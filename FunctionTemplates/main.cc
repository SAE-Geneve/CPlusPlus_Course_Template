#include <iostream>


template<typename  T, typename U>
auto add(T a, U b){
    return a + b;
}

int main(){

    auto result_numeric = add<int>( 1, 1);

    add(1, 2.3f);

    std::cout << "Result ? " << add(1, 2.300000000000000000000001l) << std::endl;
    std::cout << "Result ? " << add(2.3f, 1) << std::endl;

    return 0;

}