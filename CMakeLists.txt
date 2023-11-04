cmake_minimum_required(VERSION 3.0.0)

project(TColor VERSION 1.0.0)
configure_file(TColor)

option(TCOLOR_INSTALL "Install TColor" OFF)
option(TCOLOR_CPACK_BUILD "Build TColor with CPack" OFF)

add_library(${PROJECT_NAME} STATIC src/main.cpp include/TColor/TColor.hpp)
target_include_directories(${PROJECT_NAME} PUBLIC include/TColor)

set_target_properties(${PROJECT_NAME} PROPERTIES
    PUBLIC_HEADER "${CMAKE_SOURCE_DIR}/include/TColor.hpp" 
)

if(TCOLOR_INSTALL)
    install(TARGETS 
        ${PROJECT_NAME} DESTINATION lib
        PUBLIC_HEADER DESTINATION include/TColor
    )
    install(FILES "build/${PROJECT_NAME}Config.hpp" DESTINATION "include/${PROJECT_NAME}")
endif()

if(TCOLOR_CPACK_BUILD)
    set(CPACK_PACKAGE_DIRECTORY "${CMAKE_SOURCE_DIR}/release")
    set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/License.txt")
    set(CPACK_PACKAGE_VENDOR "RickaPrincy")
    include(CPack)
endif()