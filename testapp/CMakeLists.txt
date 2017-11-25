find_package(Armadillo)

add_executable(VectorTest main.cpp)
target_include_directories(VectorTest PUBLIC ${ARMADILLO_INCLUDE_DIRS})
target_link_libraries(VectorTest ${ARMADILLO_LIBRARIES})
