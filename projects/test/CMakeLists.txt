add_executable(test_app 
	src/main.cpp
	src/greeting.cpp
)

target_include_directories(test_app 
	PRIVATE 
	${CMAKE_CURRENT_SOURCE_DIR}/include
)