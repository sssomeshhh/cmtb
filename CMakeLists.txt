cmake_minimum_required(VERSION 3.24)

project(
        cmtb
        DESCRIPTION cmtb
        HOMEPAGE_URL https://github.com/sssomeshhh/cmtb
        LANGUAGES C CXX
        VERSION 0.0.0.1
)

set(CMAKE_CXX_STANDARD 20)

# Configure CCache if available
find_program(CCACHE_FOUND ccache)
#set(CCACHE_FOUND 0)
if (CCACHE_FOUND)
        message(STATUS "Found - 'ccache'")
        set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
else()
        message(STATUS "Not Found - 'ccache'")
endif()

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
target_link_libraries(cmtb PRIVATE
        adl
        cares gmp gnutls nettle sqlite3 ssh2 xml2 z
        bit
        torrent-rasterbar
        sdk
        cares crypto cryptopp curl dl freeimage sodium sqlite3 ssl stdc++fs rt z
        tdl
)
add_compile_options("-stdlib=libc++")
add_link_options("-fuse-ld=lld -flto")
