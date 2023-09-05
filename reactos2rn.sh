#!/usr/bin/env bash

cp -fr ../reactos/base/applications/notepad/lang/ .
cp -fr ../reactos/base/applications/notepad/res/ .
cp -fr ../reactos/base/applications/notepad/*.c .
cp -fr ../reactos/base/applications/notepad/*.h .
cp -fr ../reactos/base/applications/notepad/*.rc .
cp -fr ../reactos/output-MinGW-i386/sdk/include/reactos/version.h reactos/
cp -fr ../reactos/output-MinGW-i386/sdk/include/reactos/buildno.h reactos/
