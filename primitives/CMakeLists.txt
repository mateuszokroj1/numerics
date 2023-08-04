project(primitives)

add_library(${PROJECT_NAME} STATIC vector.c)

	target_include_directories(${PROJECT_NAME} PUBLIC prim_matrix.h PUBLIC prim_vector.h)

	install(
		TARGETS ${PROJECT_NAME}
		RUNTIME DESTINATION bin
		ARCHIVE DESTINATION bin
		LIBRARY DESTINATION lib
		PUBLIC_HEADER DESTINATION include
	)