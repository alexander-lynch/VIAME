set(CTEST_SITE "zeah.kitware.com")
set(CTEST_BUILD_NAME "Windows7_GPU_Master_Nightly")
set(CTEST_SOURCE_DIRECTORY "C:/workspace/VIAME-Windows-CPU-Release")
set(CTEST_BINARY_DIRECTORY "C:/workspace/VIAME-Windows-CPU-Release/build/")
set(CTEST_CMAKE_GENERATOR "Visual Studio 16 2019")
set(CTEST_BUILD_CONFIGURATION Release)
set(CTEST_PROJECT_NAME VIAME)
set(CTEST_BUILD_MODEL "Nightly")
set(CTEST_NIGHTLY_START_TIME "3:00:00 UTC")
set(CTEST_USE_LAUNCHERS 1)
include(CTestUseLaunchers)
set(OPTIONS 
  "-DCMAKE_BUILD_TYPE=Release"
  "-DVIAME_FIXUP_BUNDLE=ON"
  "-DVIAME_ENABLE_CUDNN=OFF"
  "-DVIAME_ENABLE_CUDA=OFF"
  "-DVIAME_ENABLE_CAMTRAWL=ON"
  "-DVIAME_ENABLE_DIVE=ON"
  "-DVIAME_ENABLE_FFMPEG=ON"
  "-DVIAME_ENABLE_FFMPEG-X264=ON"
  "-DVIAME_ENABLE_VIVIA=ON"
  "-DVIAME_ENABLE_PYTHON=ON"
  "-DVIAME_ENABLE_PYTHON-INTERNAL=ON"
  "-DVIAME_PYTHON_VERSION=3.6.15"
  "-DVIAME_PYTORCH_VERSION=1.10.2"
  "-DVIAME_ENABLE_GDAL=ON"
  "-DVIAME_ENABLE_SCALLOP_TK=OFF"
  "-DVIAME_ENABLE_PYTORCH=ON"
  "-DVIAME_ENABLE_PYTORCH-INTERNAL=OFF"
  "-DVIAME_ENABLE_PYTORCH-VIS-INTERNAL=ON"
  "-DVIAME_ENABLE_PYTORCH-MMDET=ON"
  "-DVIAME_ENABLE_PYTORCH-NETHARN=ON"
  "-DVIAME_ENABLE_PYTORCH-PYSOT=OFF"
  "-DVIAME_BUILD_KWIVER_DIR=C:/tmp/kv2"
  "-DVIAME_BUILD_PLUGINS_DIR=C:/tmp/vm2"
)

set(platform Windows7)
