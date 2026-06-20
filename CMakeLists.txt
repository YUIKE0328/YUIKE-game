cmake_minimum_required(VERSION 3.12)
project(MyMacGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Macの「.app」アプリケーション形式として出力する設定
set(CMAKE_MACOSX_BUNDLE TRUE)

# Homebrewでインストールしたraylibを探す
find_package(raylib REQUIRED)

add_executable(MyMacGame main.cpp)
target_link_libraries(MyMacGame PRIVATE raylib)

# コード署名を不要（またはアドホック署名）にする設定を追加
set_target_properties(MyMacGame PROPERTIES
    XCODE_ATTRIBUTE_CODE_SIGNING_ALLOWED "NO"
    XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY ""
)

