cmake_minimum_required(VERSION 3.12)
project(MyMacGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Macの「.app」アプリケーション形式として出力する設定
set(CMAKE_MACOSX_BUNDLE TRUE)

# Homebrewでインストールしたraylibを探す
find_package(raylib REQUIRED)

add_executable(MyMacGame main.cpp)
target_link_libraries(MyMacGame PRIVATE raylib)

