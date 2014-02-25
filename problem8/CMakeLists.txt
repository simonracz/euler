include_directories(${ATHENE_SOURCE_DIR}/math)

get_filename_component(DIRNAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

add_executable(${DIRNAME} main.cpp)

