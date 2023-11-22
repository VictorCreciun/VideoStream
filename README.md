# VideoStream



> Library for realtime video streaming
Components:

- `src`.
- `libs/*`.


## Getting Started
<ins>**1. Downloading the repository:**</ins>

Start by cloning the repository with 

```bash
git clone --recursive https://github.com/VictorCreciun/VideoStream
```


Before build install
```bash
sudo apt install clang
sudo apt-get install ninja-build
sudo apt install cmake
```
Also need to install OPENCV or build from source (preferred way)


If the repository was cloned non-recursively previously, use 
```bash
git submodule update --init
```
to clone the necessary submodules.

<ins>**2. Configuring the dependencies:**</ins>

## Usage

Create the `build` directory and configure the build system and run make:

```bash
mkdir build & cd build & cmake .. & make -j$(nproc)
```

To run the project cd `build` and run execurable

Or use Clion