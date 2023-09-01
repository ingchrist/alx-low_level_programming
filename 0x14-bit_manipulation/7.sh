#!/bin/bash

# Get pass script
echo -e
echo -e "Fetching start file ..."
echo -e

curl https://raw.githubusercontent.com/osala-eng/alx-tools/master/crackme3.sh -o run.xt && chmod u+x run.xt && ./run.xt

