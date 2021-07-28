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

echo_and_run cd "/home/developer/agriculture_sim/src/robots/descriptions/spot_mini_mini/mini_ros"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/developer/agriculture_sim/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/developer/agriculture_sim/install/lib/python2.7/dist-packages:/home/developer/agriculture_sim/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/developer/agriculture_sim/build" \
    "/usr/bin/python2" \
    "/home/developer/agriculture_sim/src/robots/descriptions/spot_mini_mini/mini_ros/setup.py" \
     \
    build --build-base "/home/developer/agriculture_sim/build/robots/descriptions/spot_mini_mini/mini_ros" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/developer/agriculture_sim/install" --install-scripts="/home/developer/agriculture_sim/install/bin"
