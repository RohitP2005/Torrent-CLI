cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Mtc VERSION 1.0)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the include directories for the project
include_directories(
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/src/torrent
    # ${PROJECT_SOURCE_DIR}/src/torrent/peer
    # ${PROJECT_SOURCE_DIR}/src/torrent/tracker
    # ${PROJECT_SOURCE_DIR}/src/torrent/download_manager
    # ${PROJECT_SOURCE_DIR}/src/torrent/network_utils
    # ${PROJECT_SOURCE_DIR}/src/torrent/piece
    # ${PROJECT_SOURCE_DIR}/src/lib
    # ${PROJECT_SOURCE_DIR}/src/some_library/include
)

# Specify the source files
set(SOURCES
    src/main.cpp
    src/torrent/torrent.cpp
    # src/torrent/peer/peer.cpp
    # src/torrent/tracker/tracker.cpp
    # src/torrent/download_manager/download_manager.cpp
    # src/torrent/network_utils/network_utils.cpp
    # src/torrent/piece/piece.cpp
)

# Create the executable from the source files
add_executable(BitTorrentClient ${SOURCES})

# Link any external libraries (e.g., Boost, OpenSSL, etc.) here 
# target_link_libraries(BitTorrentClient <library_name>)

# Add a test directory if you plan to run tests using CMake's testing framework
enable_testing()
# add_subdirectory(src/test)

