# ***** BEGIN LICENSE BLOCK *****
# Version: MPL 1.1/GPL 2.0/LGPL 2.1
#
# The contents of this file are subject to the Mozilla Public License Version
# 1.1 (the "License"); you may not use this file except in compliance with
# the License. You may obtain a copy of the License at
# http://www.mozilla.org/MPL/
#
# Software distributed under the License is distributed on an "AS IS" basis,
# WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
# for the specific language governing rights and limitations under the
# License.
#
# The Original Code is libguac.
#
# The Initial Developer of the Original Code is
# Michael Jumper.
# Portions created by the Initial Developer are Copyright (C) 2010
# the Initial Developer. All Rights Reserved.
#
# Contributor(s):
#
# Alternatively, the contents of this file may be used under the terms of
# either the GNU General Public License Version 2 or later (the "GPL"), or
# the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
# in which case the provisions of the GPL or the LGPL are applicable instead
# of those above. If you wish to allow use of your version of this file only
# under the terms of either the GPL or the LGPL, and not to allow others to
# use your version of this file under the terms of the MPL, indicate your
# decision by deleting the provisions above and replace them with the notice
# and other provisions required by the GPL or the LGPL. If you do not delete
# the provisions above, a recipient may use your version of this file under
# the terms of any one of the MPL, the GPL or the LGPL.
#
# ***** END LICENSE BLOCK *****

AUTOMAKE_OPTIONS = foreign 
ACLOCAL_AMFLAGS = -I m4
AM_CFLAGS = -Werror -Wall -pedantic -Iguacamole

libguacincdir = $(includedir)/guacamole
libguacinc_HEADERS =         \
    guacamole/audio.h        \
    guacamole/client.h       \
    guacamole/error.h        \
    guacamole/hash.h         \
    guacamole/instruction.h  \
    guacamole/layer.h        \
    guacamole/plugin.h       \
    guacamole/pool.h         \
    guacamole/protocol.h     \
    guacamole/socket.h       \
    guacamole/stream.h       \
    guacamole/timestamp.h    \
    guacamole/unicode.h

noinst_HEADERS =      \
    client-handlers.h \
    palette.h         \
    wav_encoder.h

libguac_la_SOURCES =  \
    audio.c           \
    client.c          \
    client-handlers.c \
    error.c           \
    hash.c            \
    instruction.c     \
    palette.c         \
    plugin.c          \
    pool.c            \
    protocol.c        \
    socket.c          \
    socket-fd.c       \
    socket-nest.c     \
    timestamp.c       \
    unicode.c         \
    wav_encoder.c

# Compile OGG support if available
if ENABLE_OGG
libguac_la_SOURCES += ogg_encoder.c
noinst_HEADERS += ogg_encoder.h
endif

lib_LTLIBRARIES = libguac.la
libguac_la_LDFLAGS = -version-info 5:0:0 @PTHREAD_LIBS@ @CAIRO_LIBS@ @PNG_LIBS@ @JPEG_LIBS@ @DL_LIBS@ @VORBIS_LIBS@

