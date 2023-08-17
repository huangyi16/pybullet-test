#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/huangyi/devspace/pybullet-test/src/ur5_robotiq_meta_package/universal_robot/ur_kinematics"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/huangyi/devspace/pybullet-test/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/huangyi/devspace/pybullet-test/install/lib/python3/dist-packages:/home/huangyi/devspace/pybullet-test/build/ur_kinematics/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/huangyi/devspace/pybullet-test/build/ur_kinematics" \
    "/usr/bin/python3" \
    "/home/huangyi/devspace/pybullet-test/src/ur5_robotiq_meta_package/universal_robot/ur_kinematics/setup.py" \
     \
    build --build-base "/home/huangyi/devspace/pybullet-test/build/ur_kinematics" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/huangyi/devspace/pybullet-test/install" --install-scripts="/home/huangyi/devspace/pybullet-test/install/bin"
