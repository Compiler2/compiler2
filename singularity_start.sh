#!/bin/bash
singularity shell --bind /usr:/usr --bind /opt/apps/software:/usr/local --writable --nv -e $COMPILER2_SANDBOX