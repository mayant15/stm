set(STM_TESTS
    doctest.cpp
    test.cpp
)

add_executable(stm-tests ${STM_TESTS})
add_dependencies(stm-tests stm)
target_link_libraries(stm-tests stm)
