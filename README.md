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

Filtering tests

`./test/ExampleTests --gtest_filter="*Test2"` 

or `ctest -R "Test2"`.

ctest has it's own colored output since version 3.14, for earlier versions to display gtest's colored output 

`GTEST_COLOR=1 ctest -V`

