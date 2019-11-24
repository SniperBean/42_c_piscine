#/bin/sh
ldapsearch -LLL -Q sn="*bon*" | grep cn | cut -c5- | sed 's/^.*\ //' | grep bon | wc -l | cut -c8-
