cmake_minimum_required(VERSION 3.5.0)
project(demo VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_BUILD_TYPE "Debug") #打断点调试代码必设置，Cmake默认是Release会导致断点失效
include_directories(${PROJECT_SOURCE_DIR}/study_CPP/include)#添加头文件的搜索路径
#要用的cpp文件有哪些地址就要添加源文件路径
aux_source_directory(./study_CPP/source SrcFiles)#将源文件列表写在变量SrcFiles中
aux_source_directory(./study_CPP/include SrcFiles)#工程项目较大，要创建多个模块
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/out)#设置可执行文件输出路径
add_executable(test_main ${SrcFiles})#设置可执行文件的名称，make之后build目录下出现main.exe
# target_link_libraries(test_main)
add_test(NAME test_main COMMAND test_main)