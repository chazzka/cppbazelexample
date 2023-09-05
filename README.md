## Example tutorial project for c++, libs, classes and tests with Bazel

#### Install Bazel first:
https://bazel.build/start

#### Commands:

Build selected package/executable:
```bash
bazel build //bin:main
```

Run an executable:
```bash
bazel run //bin:main
```

Run tests (http://google.github.io/googletest/quickstart-bazel.html):
```bash
bazel test --cxxopt=-std=c++14 --test_output=all ... # do not forget the dots
```
