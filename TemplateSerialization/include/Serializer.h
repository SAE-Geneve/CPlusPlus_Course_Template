//
// Created by sebas on 13.05.2026.
//

#ifndef CPLUSPLUS_COURSE_TEMPLATE_SERIALIZER_H
#define CPLUSPLUS_COURSE_TEMPLATE_SERIALIZER_H
#include <string>

// Primary template — general case
template <typename T>
class Serializer {
public:
  static std::string serialize(T val) { return std::to_string(val); }
};

// Full specialization for bool
template <>
class Serializer<bool> {
public:
  static std::string serialize(bool val) { return val ? "true" : "false"; }
};

// Partial specialization — matches any pointer
template <typename T>
class Serializer<T*> {
public:
  static std::string serialize(T* ptr) {
    return ptr ? Serializer<T>::serialize(*ptr) : "null";
  }
};

#endif // CPLUSPLUS_COURSE_TEMPLATE_SERIALIZER_H
