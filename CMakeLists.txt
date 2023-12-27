cmake_minimum_required(VERSION 3.12)
project(TColor VERSION 1.0.0 LANGUAGES CXX)

add_library(TColor INTERFACE)

target_include_directories(TColor INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

target_compile_features(TColor INTERFACE cxx_std_11)

include(GNUInstallDirs)

install(TARGETS TColor EXPORT TColorTargets)

install(DIRECTORY include/TColor DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(EXPORT TColorTargets
    FILE TColorTargets.cmake
    NAMESPACE TColor::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/TColor
)

include(CMakePackageConfigHelpers)

write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/TColorConfigVersion.cmake
    VERSION 1.0.0
    COMPATIBILITY SameMajorVersion
)

configure_package_config_file(
    ${CMAKE_CURRENT_LIST_DIR}/TColorConfig.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/TColorConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/TColor
)

install(
    FILES
        ${CMAKE_CURRENT_BINARY_DIR}/TColorConfig.cmake
        ${CMAKE_CURRENT_BINARY_DIR}/TColorConfigVersion.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/TColor
)