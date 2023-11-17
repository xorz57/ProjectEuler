<h1 align="center">ProjectEuler</h1>

<div align="center">
    <a href="https://sonarcloud.io/summary/new_code?id=xorz57_ProjectEuler">
        <img src="https://sonarcloud.io/api/project_badges/measure?project=xorz57_ProjectEuler&metric=alert_status" alt="Quality Gate Status">
    </a>
    <a href="https://sonarcloud.io/summary/new_code?id=xorz57_ProjectEuler">
        <img src="https://sonarcloud.io/api/project_badges/measure?project=xorz57_ProjectEuler&metric=bugs" alt="Bugs">
    </a>
    <a href="https://sonarcloud.io/summary/new_code?id=xorz57_ProjectEuler">
        <img src="https://sonarcloud.io/api/project_badges/measure?project=xorz57_ProjectEuler&metric=vulnerabilities" alt="Vulnerabilities">
    </a>
    <a href="https://sonarcloud.io/summary/new_code?id=xorz57_ProjectEuler">
        <img src="https://sonarcloud.io/api/project_badges/measure?project=xorz57_ProjectEuler&metric=code_smells" alt="Code Smells">
    </a>
    <a href="https://sonarcloud.io/summary/new_code?id=xorz57_ProjectEuler">
        <img src="https://sonarcloud.io/api/project_badges/measure?project=xorz57_ProjectEuler&metric=coverage" alt="Coverage">
    </a>
    <a href="https://sonarcloud.io/summary/new_code?id=xorz57_ProjectEuler">
        <img src="https://sonarcloud.io/api/project_badges/measure?project=xorz57_ProjectEuler&metric=duplicated_lines_density" alt="Duplicated Lines (%)">
    </a>
</div>

## Dependencies

- [GTest](https://github.com/google/googletest)

## How to Build

#### Linux & macOS

```bash
git clone https://github.com/microsoft/vcpkg.git ~/vcpkg
~/vcpkg/bootstrap-vcpkg.sh

git clone https://github.com/xorz57/ProjectEuler.git
cd ProjectEuler
cmake -B build -DCMAKE_BUILD_TYPE=Release -S . -DCMAKE_TOOLCHAIN_FILE=~/vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build build --config Release
ctest --build-config Release
```

#### Windows

```powershell
git clone https://github.com/microsoft/vcpkg.git C:/vcpkg
C:/vcpkg/bootstrap-vcpkg.bat
C:/vcpkg/vcpkg.exe integrate install

git clone https://github.com/xorz57/ProjectEuler.git
cd ProjectEuler
cmake -B build -DCMAKE_BUILD_TYPE=Release -S . -DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build build --config Release
ctest --build-config Release
```
