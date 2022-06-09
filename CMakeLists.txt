cmake_minimum_required(VERSION 3.5)

project(CBcalc VERSION 0.1 LANGUAGES CXX)

# I am top-level project.
# Make the root module directory visible to CMake.
list( APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../cmake )


set(CMAKE_INCLUDE_CURRENT_DIR ON)

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/src/*.h)
#file(GLOB uis ${PROJECT_SOURCE_DIR}/src/*.ui)
#set(PROJECT_SOURCES ${sources} ${headers}  ${uis} )
set(PROJECT_SOURCES main.cpp ${sources} ${headers})


add_executable(CBcalc ${PROJECT_SOURCES} )

#Ignore these for now

#target_link_libraries(fsl PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
# Install the executable.
#install( TARGETS fsl
 #  EXPORT ${PROJECT_NAME}-export
  # LIBRARY DESTINATION ${CMAKE_INSTALL_BINDIR}
   #COMPONENT Runtime )