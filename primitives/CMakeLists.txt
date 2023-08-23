project(primitives)

add_library(${PROJECT_NAME} STATIC vector.c quaternion.c)

	target_include_directories(${PROJECT_NAME} PUBLIC prim_matrix.h PUBLIC prim_vector.h PUBLIC prim_quaternion.h)

	install(
		TARGETS ${PROJECT_NAME}
		RUNTIME DESTINATION bin
		ARCHIVE DESTINATION bin
		LIBRARY DESTINATION lib
		PUBLIC_HEADER DESTINATION include
	)

add_executable(test_quaternion tests/test_quaternion.cpp)

	target_link_libraries(test_quaternion PRIVATE ${PROJECT_NAME})