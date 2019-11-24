#!/bin/bash
# run with ./makeFile.sh
# --display-tree
# --graph
# --generate-c-only
# --show-progress
# --show-memory
# --show-modules
# --verbose 
# having trouble with making this work with opencv package, going to skip

nuitka --recurse-all --standalone --python-version=2.7 --execute main.py