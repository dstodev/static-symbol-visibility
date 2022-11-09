cmake_minimum_required(VERSION 3.23)
project(static_symbol_visibility)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_ARCHIVE_CREATE "ld <LINK_FLAGS> -r <OBJECTS> -o <TARGET>.o")
set(CMAKE_CXX_ARCHIVE_APPEND "")
set(CMAKE_CXX_ARCHIVE_FINISH "llvm-objcopy --localize-hidden <TARGET>.o && <CMAKE_AR> rcs <TARGET> <TARGET>.o")

add_library(lib STATIC
	lib.cxx
	lib.hxx
)

add_executable(main
	main.cxx
)
target_link_libraries(main
	PRIVATE
		lib
)
