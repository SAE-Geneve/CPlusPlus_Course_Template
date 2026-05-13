add_executable(TemplateSerialization main.cc)

file(GLOB_RECURSE SRC_FILES src/*.cc)
file(GLOB_RECURSE HEADER_FILES include/*.h)

target_include_directories(TemplateSerialization PUBLIC include/)