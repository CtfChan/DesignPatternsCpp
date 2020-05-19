cmake_minimum_required(VERSION 3.1)

project (DesignPatternsCpp)

set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


add_subdirectory (Strategy)
add_subdirectory (Observer)
add_subdirectory (Decorator)
add_subdirectory (Factory)
add_subdirectory (AbstractFactory)
add_subdirectory (Singleton)

#