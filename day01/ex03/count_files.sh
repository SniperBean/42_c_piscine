#/bin/sh
ls -l | grep '^-' | wc -l | sed 's/ *//'
