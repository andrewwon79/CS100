CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(c-echo
    main.cpp
    Add.cpp
    Sub.cpp
    Mult.cpp
    Div.cpp
    op.cpp
    Pow.cpp
    factory.cpp
)


ADD_EXECUTABLE(test
    unit_test.cpp
    Add.cpp
    Sub.cpp
    Mult.cpp
    Div.cpp
    op.cpp
    Pow.cpp
    factory.cpp

)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_LINK_LIBRARIES(c-echo readline)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
