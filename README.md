# cmake-gtest

Clone gtest first
```
cd cmake-gtest
git clone --depth 1 https://github.com/google/googletest.git

mkdir build
cd build
cmake ..
make
ctest
./test/ExampleTests
```

`--gtest_filter="*Test2"` works well with `./test/ExampleTests`, but no effect with `ctest`.
