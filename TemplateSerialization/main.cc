#include "include/Serializer.h"

#include <iostream>
#include <ostream>
//
// Created by sebas on 13.05.2026.
//
int main() {
  Serializer<int> serializer;
  std::cout << serializer.serialize(10) << std::endl;

}