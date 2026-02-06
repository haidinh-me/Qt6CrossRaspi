#!/bin/bash

# install sshpass and gdb-multiarch
# sudo apt-get install sshpass gdb-multiarch

# Update the hostPath according to yours
projecDir=Qt_Infortainment_cmake
hostPath=/home/ubuntu/QtCrossRaspi/$projectDir
oproDir=/home/ubuntu/QtCrossRaspi/outproject/

piUserName=pi
piIpAddress=192.168.46.156
piPath=/home/pi/Desktop/
piPass=10111
qtPathOnTarget=/usr/local/qt6/lib/

case "$1" in
  build)
    echo "build docker image to build app"
    docker build -f Dockerfile.app -t final-app .
    echo "Remove tmpapp container if it is exist"
    docker rm -f tmpapp
    echo "Create a tmp container to copy binary"
    docker create --name tmpapp final-app
    echo "Copy the binary from tmp container"
    rm -rf $oproDir
    docker cp tmpapp:$hostPath/ ./outproject/
    ;;
  run)
    echo "Send binary to rasp over scp"
    sshpass -p "$piPass" scp $oproDir$projecDir/$projecDir "$piUserName"@"$piIpAddress":"$piPath"
    echo "Run application on raspi over SSH"
    sshpass -p "$piPass" ssh -t -X -o StrictHostKeyChecking=no "$piUserName"@"$piIpAddress" "cd $piPath && pwd && export LD_LIBRARY_PATH=/usr/local/qt6/lib/:$LD_LIBRARY_PATH && ./Qt_Infortainment_cmake"
    ;;
  *)
    echo "Usage: $0 {build|run}"
    exit 1
    ;;
esac
