cmake_minimum_required(VERSION 3.5)

project(CGcalc VERSION 0.1 LANGUAGES CXX)

# I am top-level project.
# Make the root module directory visible to CMake.
list( APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../cmake )
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${OUTPUT})
include_directories(include)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.h)

#eventually add gui to project
#file(GLOB uis ${PROJECT_SOURCE_DIR}/src/*.ui)
#set(PROJECT_SOURCES ${sources} ${headers}  ${uis} )

set(PROJECT_SOURCES main.cpp ${sources} ${headers})



add_executable(CGcalc ${PROJECT_SOURCES} )


set_target_properties( CGcalc
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

#Ignore these for now

#target_link_libraries(CGcalc PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

#Install the executable.
install( TARGETS CGcalc
   EXPORT ${PROJECT_NAME}-export
   LIBRARY DESTINATION ${CMAKE_INSTALL_BINDIR}
   COMPONENT Runtime )
