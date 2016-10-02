set(_src_root_path "${CMAKE_CURRENT_SOURCE_DIR}")

file(
    GLOB_RECURSE _source_list 
    LIST_DIRECTORIES false
    RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    "${_src_root_path}/*.c*"
    "${_src_root_path}/*.h*"
)

add_executable (Chess ${_source_list})
