# Building and Running the BitTorrent Client Using CMake

## Prerequisites

Before building the project, ensure that you have the following installed on your system:

- **C++ Compiler** (e.g., `g++` or `clang++`)
- **CMake** (version 3.10 or higher)
- **Make** (or any other build tool supported by CMake)


## Building the Project Using CMake

### Step 1: Create a Build Directory

It is recommended to build the project in a separate directory from the source files. Create a `build` directory inside the project folder:

```bash
mkdir build
cd build
```

### Step 2: Run CMake to Configure the Project

Run CMake from the build directory to configure the project and generate the necessary build files:

```bash
cmake ..
make
```

### Step 3: Running the Project

After the build process is complete, you can run the BitTorrent client. To run the program, pass a ```.torrent``` file as an argument:

```bash
./Mtc "/path/to/torrent_file.torrent"
```



