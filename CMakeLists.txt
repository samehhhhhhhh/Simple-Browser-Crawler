cmake_minimum_required(VERSION 3.5.0)
project(simple-crawler VERSION 0.1.0 LANGUAGES C CXX)



include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 3b15fa82ea74739b574d705fea44959b58142eb8) # Replace with your desired git commit from: https://github.com/libcpr/cpr/releases
FetchContent_MakeAvailable(cpr)


add_executable(simple-crawler src/main.cpp)
target_link_libraries(simple-crawler PRIVATE cpr::cpr)

