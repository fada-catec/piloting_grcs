INCLUDE_DIRECTORIES(${PROJECT_BINARY_DIR})
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src)

ADD_SUBDIRECTORY(common)
ADD_SUBDIRECTORY(communications)
ADD_SUBDIRECTORY(core)
ADD_SUBDIRECTORY(dataModel)
ADD_SUBDIRECTORY(gui)
ADD_SUBDIRECTORY(maps)

SET(LIB_COMPONENTS   ${LIB_COMPONENTS} PARENT_SCOPE)
