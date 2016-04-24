set(TILESET_HEADERS
    Dimension.hpp
    Insets.hpp
    Tileset.hpp)

set(TILESET_SOURCES
    Dimension.cpp
    Insets.cpp
    Tileset.cpp)

if (TILESET_BUILD_SHARED)
    add_library(${CMAKE_PROJECT_NAME} SHARED ${TILESET_SOURCES})
    set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR} VERSION ${PROJECT_VERSION})

    target_link_libraries(${CMAKE_PROJECT_NAME} sfml-graphics)

    install(TARGETS ${CMAKE_PROJECT_NAME} LIBRARY DESTINATION ${LIB_INSTALL_DIR} COMPONENT libraries)
endif ()

if (TILESET_BUILD_STATIC)
    add_library(${CMAKE_PROJECT_NAME}-static STATIC ${TILESET_SOURCES})
    set_target_properties(${CMAKE_PROJECT_NAME}-static PROPERTIES OUTPUT_NAME ${CMAKE_PROJECT_NAME})

    target_link_libraries(${CMAKE_PROJECT_NAME}-static sfml-graphics)

    install(TARGETS ${CMAKE_PROJECT_NAME}-static ARCHIVE DESTINATION ${LIB_INSTALL_DIR} COMPONENT libraries)
endif ()

install(DIRECTORY ../include/zzbgames DESTINATION ${INCLUDE_INSTALL_DIR})
