#!/bin/sh

set -x

brew update
brew install pkgconfig zlib curl openssl libssh2

ln -s /Applications/Xcode.app/Contents/Developer/usr/lib/libLeaksAtExit.dylib /usr/local/lib
