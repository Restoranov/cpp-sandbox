add_executable(training_stl_app
	arrays/src/main.cpp
	arrays/include/TrainingArrays.h
)

target_include_directories(training_stl_app
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/arrays/include
)