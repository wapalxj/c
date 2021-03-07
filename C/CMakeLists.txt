cmake_minimum_required(VERSION 3.6)
project(C)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES c.c str.c struct.c structarray.c typedef.c)
#add_executable(C ${SOURCE_FILES} structarray.c typedef.c)
add_executable(A main.cpp )
add_executable(B c.c  )
add_executable(C str.c )
add_executable(D struct/struct.c)
add_executable(E struct/structarray.c)
add_executable(F typedef.c)
add_executable(G c6_/main.c)