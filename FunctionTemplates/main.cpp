#include <iostream>


template<typename  T>
T add(T a, T b){
    return a + b;
}

int main(){

    auto result_numeric = add<int>( 1, 1);
    std::cout << "Result ? " << result_numeric << std::endl;
    return 0;

}