cmake_minimum_required(VERSION 2.8)

project(JRiftLibrary)

find_package(JNI REQUIRED)

add_subdirectory (OculusSDK)
 
include_directories(Include ${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(Include ${CMAKE_CURRENT_SOURCE_DIR}/OculusSDK/LibOVR/Include)
include_directories(Include ${CMAKE_CURRENT_SOURCE_DIR}/OculusSDK/LibOVR/Src)
include_directories(Include ${JNI_INCLUDE_DIRS})
link_directories(Include ${CMAKE_BINARY_DIR}/output)

if(CMAKE_COMPILER_IS_GNUCXX)
	if("${CMAKE_SIZEOF_VOID_P}" EQUAL "8")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ftree-vectorize")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ftree-vectorize")
    endif()
	set(CMAKE_CXX_FLAGS "-O2 -msse2 ${CMAKE_CXX_FLAGS}")
	set(CMAKE_C_FLAGS "-O2 -msse2 ${CMAKE_C_FLAGS}")
	set(CMAKE_SHARED_LINKER_FLAGS "-Wl,-O1,--sort-common,--as-needed,-z,relro")
endif()

if(WIN32)
    set ( NATIVES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/natives/windows )
elseif(APPLE)
    set ( NATIVES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/natives/osx )
else() 
    set ( NATIVES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/natives/linux )
endif()

if("${CMAKE_SIZEOF_VOID_P}" EQUAL "8")
    set(BITS "64")
else()
    set(BITS "")
endif()

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${NATIVES_DIR} )
foreach( OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES} )
    string( TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG )
    set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${NATIVES_DIR} )
endforeach( OUTPUTCONFIG CMAKE_CONFIGURATION_TYPES )

set( JRIFT_DYNLIB_NAME JRiftLibrary${BITS} )
add_library(${JRIFT_DYNLIB_NAME} SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/JRiftLibrary.cpp)
target_link_libraries (${JRIFT_DYNLIB_NAME} general ${OVR_LIBRARIES})
target_link_libraries (${JRIFT_DYNLIB_NAME} debug ovrd)
target_link_libraries (${JRIFT_DYNLIB_NAME} optimized ovr)

