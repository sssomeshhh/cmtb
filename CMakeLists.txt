cmake_minimum_required(VERSION 3.24)

project(
        cmtb
        DESCRIPTION cmtb
        HOMEPAGE_URL https://github.com/sssomeshhh/cmtb
        LANGUAGES C CXX
        VERSION 0.0.0.1
        )

set(CMAKE_CXX_STANDARD 20)

add_executable(cmtb)

target_sources(
        cmtb PRIVATE

        src/app.cpp

        src/depAdl.hpp src/depAdl.cpp
        src/depBit.hpp src/depBit.cpp
        src/depSdk.hpp src/depSdk.cpp
        src/depTdl.hpp src/depTdl.cpp
        )

target_include_directories(cmtb PRIVATE ${PROJECT_SOURCE_DIR}/inc)
target_link_directories(cmtb PRIVATE ${PROJECT_SOURCE_DIR}/lib)
