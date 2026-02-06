FROM qtcrossbuild:latest

# Update the repoPath according to yours
ARG projectDir=Qt_Infortainment_cmake
ARG repoPath=/home/ubuntu/Qt6CrossRaspi/

RUN rm -rf $repoPath$projectDir

RUN mkdir -p $repoPath$projectDir

COPY $projectDir $repoPath$projectDir

RUN cd $repoPath$projectDir && \
    /build/qt6/pi/bin/qt-cmake . -DCMAKE_BUILD_TYPE=Debug && \
    cmake --build .
