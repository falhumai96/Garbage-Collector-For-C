cmake_minimum_required(VERSION 2.4.0)
project(cgc)
include_directories(include)
file(GLOB SOURCES lib/*.c)
file(GLOB HEADERS include/*.h)
add_library(${PROJECT_NAME} SHARED ${SOURCES})
set_target_properties(${PROJECT_NAME}
    PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)
file(COPY ${HEADERS} DESTINATION include)
install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(FILES ${HEADERS} DESTINATION include)